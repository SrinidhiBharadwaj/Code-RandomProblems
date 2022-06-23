#include <vector>
#include <iostream>
using namespace std;

void print(std::vector<int> const &input)
{
    for (int i = 0; i < input.size(); i++) {
        std::cout << input.at(i) << ' ';
    }
}
 
vector<int> twoNumberSum(vector<int> array, int targetSum) {

    vector<int> ret_val;
    vector<int> parsed;
    int diff = 0;
    for (int i = 0; i < array.size(); i++){
        diff = targetSum - array[i];

        if (count(parsed.begin(), parsed.end(), diff)){
            ret_val.push_back(array[i]);
            ret_val.push_back(diff);
            return ret_val;
        }
        else{
            parsed.push_back(array[i]);
        }
    }
    return ret_val;
}

int main(){
    vector<int> input_seq = {3, 5, -4, 8, 11, 1, -1, 6};
    int targetNum = 10;
    vector<int> out_arr = twoNumberSum(input_seq, targetNum);
    print(out_arr);
    return 0;
}