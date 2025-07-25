set_property IOSTANDARD LVCMOS18 [get_ports {pl_pb*}]
set_property IOSTANDARD LVCMOS18 [get_ports {rgb_led*}]
set_property IOSTANDARD LVCMOS18 [get_ports {click*}]
set_property IOSTANDARD LVCMOS18 [get_ports {tempsensor*}]
set_property PACKAGE_PIN A8 [get_ports pl_pb_tri_i ]; # HD_GPIO_PB1 
set_property PACKAGE_PIN A7 [get_ports {rgb_led_0_tri_o[0]}]; # HD_GPIO_RGB1_R 
set_property PACKAGE_PIN B6 [get_ports {rgb_led_0_tri_o[1]}]; # HD_GPIO_RGB1_G 
set_property PACKAGE_PIN B5 [get_ports {rgb_led_0_tri_o[2]}]; # HD_GPIO_RGB1_B 
set_property PACKAGE_PIN B4 [get_ports {rgb_led_1_tri_o[0]}]; # HP_GPIO_RGB2_R 
set_property PACKAGE_PIN A2 [get_ports {rgb_led_1_tri_o[1]}]; # HP_GPIO_RGB2_G 
set_property PACKAGE_PIN F4 [get_ports {rgb_led_1_tri_o[2]}]; # HP_GPIO_RGB2_B 

set_property PACKAGE_PIN G7 [get_ports {click_spi_pl_ss_io[0]}]
set_property PACKAGE_PIN G5 [get_ports {click_spi_pl_ss_io[1]}]

set_property IOSTANDARD LVCMOS18 [get_ports {click_spi_pl_ss_io[1]}]
set_property IOSTANDARD LVCMOS18 [get_ports {click_spi_pl_ss_io[0]}]
