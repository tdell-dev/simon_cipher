set projname "simon_cipher"
puts "Building $projname"

file mkdir "build"

create_project $projname build/ -part xczu1cg-sbva484-1-e -force
set_property target_language Verilog [current_project]
set_property DESIGN_MODE RTL [current_fileset]

#xhub::refresh_catalog [xhub::get_xstores xilinx_board_store]
#xhub::install [xhub::get_xitems]
#set_param board.repoPaths [ get_property LOCAL_ROOT_DIR [xhub::get_xstores xilinx_board_store]]

import_files -fileset constrs_1 -norecurse rtl/constraints/constrs_default.xdc

#set_property board_part avnet-tria:zuboard_1cg:part0:1.2 [current_project]

source scripts/tcl/gen_simon_ip.tcl

add_files -scan_for_includes rtl/src/core/ rtl/src/top/
source scripts/tcl/zub1cg_sbc_base.tcl
