#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vsimon.h"
//#include "Vsimon___024unit.h"

#define MAX_SIM_TIME 50000
vluint64_t sim_time = 0;
vluint64_t posedge_cnt = 0;

void dut_reset( Vsimon *dut, vluint64_t &sim_time) {
    dut->rst_simon_cfg = 0;
    dut->rst_simon_data = 0;
    if ( sim_time > 1 && sim_time < 5) {
        dut->rst_simon_cfg = 1;
        dut->rst_simon_data = 1;
    }
}

void write_plaintext( Vsimon *dut, std::array<int,8> pt, int posedge_cnt ) {
    VlWide<4>* bus;
    bus = new VlWide<4>();
    switch ( posedge_cnt ) {
        case 2000:
            dut->simon_data_awaddr = 0;
            dut->simon_data_awvalid = 1;
            //dut->simon_cfg_awprot
            //dut->simon_cfg_awready
            break;
        case 2001:
            bus->m_storage[0] = pt[0];
            bus->m_storage[1] = pt[1];
            bus->m_storage[2] = pt[2];
            bus->m_storage[3] = pt[3];
            bus->m_storage[4] = pt[4];
            bus->m_storage[5] = pt[5];
            bus->m_storage[6] = pt[6];
            bus->m_storage[7] = pt[7];

            dut->simon_data_awvalid = 0;
            dut->simon_data_wdata = *bus;
            dut->simon_data_wvalid = 1;
            break;
        default:
            bus->m_storage[0] = 0;
            bus->m_storage[1] = 0;
            bus->m_storage[2] = 0;
            bus->m_storage[3] = 0;
            bus->m_storage[4] = 0;
            bus->m_storage[5] = 0;
            bus->m_storage[6] = 0;
            bus->m_storage[7] = 0;
            dut->simon_data_wdata = *bus;
            dut->simon_data_wvalid = 0;
            break;
    }

}

void write_key_cfg( Vsimon *dut, std::array<int,16> key, int posedge_cnt ) {
    switch ( posedge_cnt ) {
        case 1000:
            dut->simon_cfg_awaddr =  0;
            dut->simon_cfg_awvalid =  1;
            //dut->simon_cfg_awprot
            //dut->simon_cfg_awready
            break;
        case 1001: //We expect awready to be high here
            dut->simon_cfg_awvalid =  0;
            dut->simon_cfg_wdata =  key[0];
            dut->simon_cfg_wvalid =  1;
            break;
        case 1002: //We expect awready to be high here
            dut->simon_cfg_wdata =  key[1];
            dut->simon_cfg_wvalid =  1;
            break;
        case 1003: //We expect awready to be high here
            dut->simon_cfg_wdata =  key[2];
            dut->simon_cfg_wvalid =  1;
            break;
        case 1004: //We expect awready to be high here
            dut->simon_cfg_wdata =  key[3];
            dut->simon_cfg_wvalid =  1;
            break;
        case 1005: //We expect awready to be high here
            dut->simon_cfg_wdata =  key[4];
            dut->simon_cfg_wvalid =  1;
            break;
        case 1006: //We expect awready to be high here
            dut->simon_cfg_wdata =  key[5];
            dut->simon_cfg_wvalid =  1;
            break;
        case 1007: //We expect awready to be high here
            dut->simon_cfg_wdata =  key[6];
            dut->simon_cfg_wvalid =  1;
            break;
        case 1008: //We expect awready to be high here
            dut->simon_cfg_wdata =  key[7];
            dut->simon_cfg_wvalid =  1;
            break;
        case 1009: //We expect awready to be high here
            dut->simon_cfg_wdata =  key[8];
            dut->simon_cfg_wvalid =  1;
            break;
        case 1010: //We expect awready to be high here
            dut->simon_cfg_wdata =  key[9];
            dut->simon_cfg_wvalid =  1;
            break;
        case 1011: //We expect awready to be high here
            dut->simon_cfg_wdata =  key[10];
            dut->simon_cfg_wvalid =  1;
            break;
        case 1012: //We expect awready to be high here
            dut->simon_cfg_wdata =  key[11];
            dut->simon_cfg_wvalid =  1;
            break;
        case 1013: //We expect awready to be high here
            dut->simon_cfg_wdata =  key[12];
            dut->simon_cfg_wvalid =  1;
            break;
        case 1014: //We expect awready to be high here
            dut->simon_cfg_wdata =  key[13];
            dut->simon_cfg_wvalid =  1;
            break;
        case 1015: //We expect awready to be high here
            dut->simon_cfg_wdata =  key[14];
            dut->simon_cfg_wvalid =  1;
            break;
        case 1016: //We expect awready to be high here
            dut->simon_cfg_wdata =  key[15];
            dut->simon_cfg_wvalid =  1;
            break;
        default:
            dut->simon_cfg_wdata =  0;
            dut->simon_cfg_wvalid =  0;
            break;
    }

      //dut->simon_cfg_araddr
      //dut->simon_cfg_arprot
      //dut->simon_cfg_arready
      //dut->simon_cfg_arvalid
      //dut->simon_cfg_bready
      //dut->simon_cfg_bresp
      //dut->simon_cfg_bvalid
      //dut->simon_cfg_rdata
      //dut->simon_cfg_rready
      //dut->simon_cfg_rresp
      //dut->simon_cfg_rvalid
      //dut->simon_cfg_wdata
      //dut->simon_cfg_wready
      //dut->simon_cfg_wstrb
      //dut->simon_cfv_wvalid
      
}

int main(int argc, char**argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Vsimon *dut = new Vsimon;

    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");

    //MSBs are at index 0 of array
    int posedge_cnt = 0;
    std::array<int,16> key_arr = {0x1f1e, 0x1d1c, 0x1b1a, 0x1918, 0x1716, 0x1514, 0x1312, 0x1110, 0x0f0e, 0x0d0c, 0x0b0a, 0x0908,0x0706, 0x0504, 0x0302, 0x0100};
    std::array<int,8> plaintext_arr = {0x7420,0x6e69, 0x206d, 0x6f6f, 0x6d69, 0x7320, 0x6120, 0x7369};
    std::array<int,8> cipher_arr = {0x8d2b, 0x5579, 0xafc8, 0xa3a0, 0x3bf7, 0x2a87, 0xefe7, 0xb868};

    while (sim_time < MAX_SIM_TIME) {
        dut_reset(dut, sim_time);

        dut->clk_simon_cfg ^= 1;
        dut->clk_simon_data ^= 1;
        dut->eval();

        if ( dut->clk_simon_cfg == 1 ) {
            posedge_cnt++;
            if ( posedge_cnt > 1000 && posedge_cnt < 2000 ) {
                write_key_cfg(dut, key_arr, posedge_cnt);
            }
            if ( posedge_cnt > 2000 && posedge_cnt < 3000 ) {
                write_plaintext(dut, plaintext_arr, posedge_cnt);
            }
            //if ( posedge_cnt > 3000 && posedge_cnt < 4000 ) {
            //    read_ciphertext(dut, posedge_cnt);
            //}
        }
        dut->eval();
        m_trace->dump(sim_time);
        sim_time++;
    }

    int test_status = 0;
    //test_status = compare_test_golden(cipher_arr, cipher_test_arr);
    if ( test_status == 1 ) {
        std::cout << "PASSED!" << std::endl;
    } else {
        std::cout << "FAILED!" << std::endl;
    }

    m_trace->close();
    delete dut;
    exit(EXIT_SUCCESS);
}

