if [file exists "work"] {vdel -all}
vlib work

vlog -f dut.f
vlog -f tb.f

vsim top
set NoQuitOnFinish 1
onbreak {resume}
log /* -r
run -all
quit 
