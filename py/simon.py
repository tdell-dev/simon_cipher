import json
from bit_rotate import *
from bit_func   import *

#z_supp          = [      7,       3,       6,       9,       f,       8,       8,       5,       1,       9,       2,       c,       0,       e,       f,       5]
#z_supp_hex      = [0,1,1,1, 0,0,1,1, 0,1,1,0, 1,0,0,1, 1,1,1,1, 1,0,0,0, 1,0,0,0, 0,1,0,1, 0,0,0,1, 1,0,0,1, 0,0,1,0, 1,1,0,0, 0,0,0,0, 1,1,1,0, 1,1,1,1, 0,1,0,1]
#z_sudo          = [1,1, 0,1,0,0, 0,1,1,1, 1,0,0,1, 1,0,1,0, 1,1,0,1, 1,0,0,0, 1,0,0,0, 0,0,0,1, 0,1,1,1, 0,0,0,0, 1,1,0,0, 1,0,1,0, 0,1,0,0, 1,1,1,0, 1,1,1,1]
#z_sudo_hex      = [  3,       4,       7,       9,       a,       d,       8,       8,       1,       7,       0,       c,       a,       4,       e,       f]
#z_sudo_flip     = [1,1, 1,1,0,1, 1,1,0,0, 1,0,0,1, 0,1,0,0, 1,1,0,0, 0,0,1,1, 1,0,1,0, 0,0,0,0, 0,1,0,0, 0,1,1,0, 1,1,0,1, 0,1,1,0, 0,1,1,1, 1,0,0,0, 1,0,1,1] 
#z_sudo_hex_flip = [  3,       d,       c,       9,

z_hex = "fdc94c3a046d678b"
#z_bin = [1111, 1101, 1100, 1001, 0100, 1100, 0011, 1010, 0000, 0100, 0110, 1101, 0110, 0111, 1000, 1011]
z = hex_string_to_bit_array(z_hex)
z_rev_bin = [1,1,0,1,0,0,0,1,1,1,1,0,0,1,1,0,1,0,1,1,0,1,1,0,0,0,1,0,0,0,0,0,0,1,0,1,1,1,0,0,0,0,1,1,0,0,1,0,1,0,0,1,0,0,1,1,1,0,1,1,1,1,1,1] 
#print("z = {}".format(z))
z = z_rev_bin

def key_schedule( key ):

    key_bit_array = hex_string_to_bit_array( key )
    final_key_array = [ bit_array_to_hex_string(key_bit_array[192:256]),
                        bit_array_to_hex_string(key_bit_array[128:192]),
                        bit_array_to_hex_string(key_bit_array[ 64:128]),
                        bit_array_to_hex_string(key_bit_array[  0: 64]) ]

    for idx in range(4,72):
        tmp = rt( final_key_array[idx-1], 'R', 3)
        tmp = xor( tmp, final_key_array[idx-3] )
        tmp = xor( tmp, rt(tmp, 'R', 1))
        final_key_array.append(xor(
                                   xor(inv(final_key_array[idx-4]), tmp),
                                   xor("000000000000000" + str(z[(idx-4) % 62]), "0000000000000003")
                                   )
                              )
    return final_key_array


def simon128_256( plaintext, key ):
    key_list = key_schedule(key)
    plaintext_bit = hex_string_to_bit_array(plaintext)

    y = bit_array_to_hex_string(plaintext_bit[64:128])
    x = bit_array_to_hex_string(plaintext_bit[ 0: 64])

    for idx in range(0,72):
        tmp = x
        B = bit_and( rt(x, 'L', 1), rt(x, 'L',8) )
        A = xor( rt( x, 'L', 2), key_list[idx] )
        x = xor( xor(y, B), A)
        y = tmp
    return x + y
       

if __name__ == '__main__':
    f = open('test.json')
    data_dict = json.load(f)
    cipher = simon128_256(data_dict['tests'][0]['plaintext'], data_dict['tests'][0]['key'])
    if cipher != data_dict['tests'][0]['cipher'].upper():
        print("FAIL: MISMATCH!!!\nGolden: {}\n  Test: {}".format(data_dict['tests'][0]['cipher'].upper(), cipher))
    else:
        print("PASS!!!\nGolden: {}\n  Test: {}".format(data_dict['tests'][0]['cipher'].upper(), cipher))


