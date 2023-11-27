from bit_rotate import hex_string_to_bit_array, bit_array_to_hex_string

def xor( v0, v1 ):
    v0_arr = hex_string_to_bit_array(v0)
    v1_arr = hex_string_to_bit_array(v1)

    out_arr = []
    for idx in range(len(v0_arr)):
        if v0_arr[idx] and v1_arr[idx]:
            out_arr.append( 0 )
        elif  v0_arr[idx] and not v1_arr[idx]:
            out_arr.append( 1 )
        elif not v0_arr[idx] and v1_arr[idx]:
            out_arr.append( 1 )
        elif not v0_arr[idx] and not v1_arr[idx]:
            out_arr.append( 0 )

    #print( "final hex value: {}".format(bit_array_to_hex_string(out_arr)))
    return bit_array_to_hex_string(out_arr)

def bit_and( v0, v1 ):
    v0_arr = hex_string_to_bit_array(v0)
    v1_arr = hex_string_to_bit_array(v1)

    out_arr = []
    for idx in range(len(v0_arr)):
        if v0_arr[idx] and v1_arr[idx]:
            out_arr.append( 1 )
        else:
            out_arr.append( 0 )

    #print( "final hex value: {}".format(bit_array_to_hex_string(out_arr)))
    return bit_array_to_hex_string(out_arr)

def inv( v0 ):
    v0_arr = hex_string_to_bit_array(v0)
    out_arr = []
    for idx in range(len(v0_arr)):
        if v0_arr[idx]:
            out_arr.append( 0 )
        else:
            out_arr.append( 1 )
    return bit_array_to_hex_string(out_arr)



if __name__ == '__main__':
    func = input('Which function? {A: and, I: inv, X: xor}: ')

    v0 = input("first hex value: ")
    if ( func == 'A' or func == 'a' ):
        v1 = input("secnd hex value: ")
        print(bit_and(v0,v1))
    elif ( func == 'I' or func == 'i' ):
        print(inv(v0))
    else:
        v1 = input("secnd hex value: ")
        print(xor(v0,v1))
