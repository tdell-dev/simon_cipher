Programming cycle is as follows:

set RST to 1
  Set RUN to 1
  Place input data into INP_DATA buffer
  Place input key into INP_KEY buffer
  Write a 1 into the CALC_VLD buffer
  Poll DONE register (or attach to interrupt) for a 1
  Read OUT_DATA buffer
