This python simulation provides the golden input/output test case to encode
128b of simon data with a 256b key. The test case definition is stored in 
test.json. 

This json is extendable by adding more entries into the tests dictionary.
Key, plaintext and ciphertext are stored as hexadecimal strings.

To execute, simply run "/path/to/python3 simon.py" and it will run through
all test cases in the test dictionary.

