create_ip -name fifo_generator -vendor xilinx.com -library ip -version 13.2 -module_name simon_fifo
set_property -dict [list CONFIG.Fifo_Implementation {Common_Clock_builtin_FIFO} CONFIG.Performance_Options {First_Word_Fall_Through} CONFIG.Use_Embedded_Registers {false} ] [get_ips simon_fifo]

create_ip -name blk_mem_gen -vendor xilinx.com -library ip -version 8.4 -module_name simon_key_bram
set_property -dict [list CONFIG.Assume_Synchronous_Clk {true} CONFIG.Memory_Type {Simple_Dual_Port_RAM} CONFIG.Operating_Mode_A {WRITE_FIRST} CONFIG.Write_Depth_A {512} CONFIG.Write_Width_A {64} ] [get_ips simon_key_bram]
#generate_target {instantiation_template} [get_files /home/t/Desktop/simon_cipher/build/simon_cipher.srcs/sources_1/ip/blk_mem_gen_0/blk_mem_gen_0.xci]

update_compile_order -fileset sources_1

generate_target all [get_files  /home/t/Desktop/simon_cipher/build/simon_cipher.srcs/sources_1/ip/*]

export_ip_user_files -of_objects [get_files /home/t/Desktop/simon_cipher/build/simon_cipher.srcs/sources_1/ip/blk_mem_gen_0/blk_mem_gen_0.xci] -no_script -sync -force -quiet
export_simulation -of_objects [get_files /home/t/Desktop/simon_cipher/build/simon_cipher.srcs/sources_1/ip/blk_mem_gen_0/blk_mem_gen_0.xci] -directory /home/t/Desktop/simon_cipher/build/simon_cipher.ip_user_files/sim_scripts -ip_user_files_dir /home/t/Desktop/simon_cipher/build/simon_cipher.ip_user_files -ipstatic_source_dir /home/t/Desktop/simon_cipher/build/simon_cipher.ip_user_files/ipstatic -lib_map_path [list {modelsim=/home/t/Desktop/simon_cipher/build/simon_cipher.cache/compile_simlib/modelsim} {questa=/home/t/Desktop/simon_cipher/build/simon_cipher.cache/compile_simlib/questa} {xcelium=/home/t/Desktop/simon_cipher/build/simon_cipher.cache/compile_simlib/xcelium} {vcs=/home/t/Desktop/simon_cipher/build/simon_cipher.cache/compile_simlib/vcs} {riviera=/home/t/Desktop/simon_cipher/build/simon_cipher.cache/compile_simlib/riviera}] -use_ip_compiled_libs -force -quiet

