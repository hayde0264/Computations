#include <iostream>
#include <vector>
using namespace std; 

int solution(const vector<int>& inputArray) 
{ 
    int max = inputArray[0] * inputArray[1]; 
    for (int i = 0; i < inputArray.size()-1; i++) 
    { 
        int curr_max = inputArray[i] * inputArray[i+1]; 
        if (curr_max > max) 
            max = curr_max; 
    }
    return max; 
}

