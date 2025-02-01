Currently verilated simulation is very simple.  Write 1 key config, write 1 plaintext, read one ciphertext.
No bit-exact checking added yet, but coming soon.  This is mainly an exercise in learning verilator.
Order of operations is bit-exact -> build with petalinux & test ( working iirc, just needs writeup ) -> post on tdell.xyz

To execute sim as is:
  "make clean && make"
