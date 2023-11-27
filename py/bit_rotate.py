#This takes in a hex value as a string, breaks it up into a list of bits, rotates by the number specified at the
# start and then outputs the hex

def hex_string_to_bit_array ( inp_value ):
    arr = []    
    for val in inp_value:
        if ( val == '0' ):
            arr.append(0)    
            arr.append(0)    
            arr.append(0)    
            arr.append(0)    
        elif ( val == '1' ):
            arr.append(0)    
            arr.append(0)    
            arr.append(0)    
            arr.append(1)   
        elif ( val == '2' ):
            arr.append(0)    
            arr.append(0)    
            arr.append(1)    
            arr.append(0)   
        elif ( val == '3' ):
            arr.append(0)    
            arr.append(0)    
            arr.append(1)    
            arr.append(1)   
        elif ( val == '4' ):
            arr.append(0)    
            arr.append(1)    
            arr.append(0)    
            arr.append(0)   
        elif ( val == '5' ):
            arr.append(0)    
            arr.append(1)    
            arr.append(0)    
            arr.append(1)   
        elif ( val == '6' ):
            arr.append(0)    
            arr.append(1)    
            arr.append(1)    
            arr.append(0)   
        elif ( val == '7' ):
            arr.append(0)    
            arr.append(1)    
            arr.append(1)    
            arr.append(1)   
        elif ( val == '8' ):
            arr.append(1)    
            arr.append(0)    
            arr.append(0)    
            arr.append(0)   
        elif ( val == '9' ):
            arr.append(1)    
            arr.append(0)    
            arr.append(0)    
            arr.append(1)   
        elif ( val == 'a' or val == 'A' ):
            arr.append(1)    
            arr.append(0)    
            arr.append(1)    
            arr.append(0)   
        elif ( val == 'b' or val == 'B' ):
            arr.append(1)    
            arr.append(0)    
            arr.append(1)    
            arr.append(1)   
        elif ( val == 'c' or val == 'C' ):
            arr.append(1)    
            arr.append(1)    
            arr.append(0)    
            arr.append(0)   
        elif ( val == 'd' or val == 'D' ):
            arr.append(1)    
            arr.append(1)    
            arr.append(0)    
            arr.append(1)   
        elif ( val == 'e' or val == 'E' ):
            arr.append(1)    
            arr.append(1)    
            arr.append(1)    
            arr.append(0)   
        elif ( val == 'f' or val == 'F' ):
            arr.append(1)    
            arr.append(1)    
            arr.append(1)    
            arr.append(1)   
  
    return arr


def bit_array_to_hex_string( bit_array ):
    bit_array_len = len(bit_array)

    ret_string = ""
    for idx in range(0,bit_array_len, 4):
        if bit_array[idx] == 0 and bit_array[idx+1] == 0 and bit_array[idx+2] == 0 and bit_array[idx+3] == 0 :
            ret_string += "0"
        elif bit_array[idx] == 0 and bit_array[idx+1] == 0 and bit_array[idx+2] == 0 and bit_array[idx+3] == 1 :
            ret_string += "1"
        elif bit_array[idx] == 0 and bit_array[idx+1] == 0 and bit_array[idx+2] == 1 and bit_array[idx+3] == 0 :
            ret_string += "2"
        elif bit_array[idx] == 0 and bit_array[idx+1] == 0 and bit_array[idx+2] == 1 and bit_array[idx+3] == 1 :
            ret_string += "3"
        elif bit_array[idx] == 0 and bit_array[idx+1] == 1 and bit_array[idx+2] == 0 and bit_array[idx+3] == 0 :
            ret_string += "4"
        elif bit_array[idx] == 0 and bit_array[idx+1] == 1 and bit_array[idx+2] == 0 and bit_array[idx+3] == 1 :
            ret_string += "5"
        elif bit_array[idx] == 0 and bit_array[idx+1] == 1 and bit_array[idx+2] == 1 and bit_array[idx+3] == 0 :
            ret_string += "6"
        elif bit_array[idx] == 0 and bit_array[idx+1] == 1 and bit_array[idx+2] == 1 and bit_array[idx+3] == 1 :
            ret_string += "7"
        elif bit_array[idx] == 1 and bit_array[idx+1] == 0 and bit_array[idx+2] == 0 and bit_array[idx+3] == 0 :
            ret_string += "8"
        elif bit_array[idx] == 1 and bit_array[idx+1] == 0 and bit_array[idx+2] == 0 and bit_array[idx+3] == 1 :
            ret_string += "9"
        elif bit_array[idx] == 1 and bit_array[idx+1] == 0 and bit_array[idx+2] == 1 and bit_array[idx+3] == 0 :
            ret_string += "A"
        elif bit_array[idx] == 1 and bit_array[idx+1] == 0 and bit_array[idx+2] == 1 and bit_array[idx+3] == 1 :
            ret_string += "B"
        elif bit_array[idx] == 1 and bit_array[idx+1] == 1 and bit_array[idx+2] == 0 and bit_array[idx+3] == 0 :
            ret_string += "C"
        elif bit_array[idx] == 1 and bit_array[idx+1] == 1 and bit_array[idx+2] == 0 and bit_array[idx+3] == 1 :
            ret_string += "D"
        elif bit_array[idx] == 1 and bit_array[idx+1] == 1 and bit_array[idx+2] == 1 and bit_array[idx+3] == 0 :
            ret_string += "E"
        elif bit_array[idx] == 1 and bit_array[idx+1] == 1 and bit_array[idx+2] == 1 and bit_array[idx+3] == 1 :
            ret_string += "F"
    return ret_string


def rt( inp_value, direction, num_rotate ):
    arr = hex_string_to_bit_array( inp_value )
    final_addr = len(arr)-1
    final_arr = []

    if ( direction == 'R' or direction == 'r' ):
        for idx in range(num_rotate):
            final_arr.append( arr[final_addr-(num_rotate-idx-1)] )

        for idx in range(final_addr-num_rotate+1):
            final_arr.append( arr[idx] )

    else :
        for idx in range( num_rotate, final_addr+1, 1):
            final_arr.append(arr[idx])
        for idx in range( 0, num_rotate):
            final_arr.append(arr[idx])

    return bit_array_to_hex_string(final_arr)
    


if __name__ == '__main__':
    direction = input('Direction (L or R): ')
    num_rotate = int(input('How many places to rotate: '))
    inp_value = input('Input the hex value: ')
    print("In bin: {}".format(hex_string_to_bit_array(inp_value)))
    out = rt(inp_value, direction, num_rotate) 
    print("Out: {}".format(out))
    print("out bin: {}".format(hex_string_to_bit_array(out)))

