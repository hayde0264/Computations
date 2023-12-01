#include <vector>

class Solution {
public:
    std::vector<double> convertTemperature(double celsius) 
    {
        std::vector<double> r{0,0}; 
        r[0]=celsius+273.15; 
        r[1]=celsius*1.80+32.00; 
        return {r[0],r[1]}; 
    }
};