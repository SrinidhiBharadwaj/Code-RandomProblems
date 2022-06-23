import numpy as np

def twoNumberSum(array, targetSum):
    parsed_num = []
    ret_arr = []
    for num in array:
        diff = targetSum - num
        #print(parsed_num)
        if diff in parsed_num:
            return [diff, num]
        else:
            parsed_num.append(num)

    return ret_arr

if __name__ == "__main__":

    input_seq = [3, 5, -4, 8, 11, 1, -1, 6]
    targetNum = 10

    output_arr = twoNumberSum(input_seq, targetNum)
    print(output_arr)
