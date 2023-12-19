// https://www.codewars.com/kata/541c8630095125aba6000c00/train/cpp
#include <iostream>
#include <string>

using namespace std;

int digital_root(const int &n)
{
    int sum = 0;
    string digit = to_string(n);
    for (int i = 0; i < digit.size(); i++)
    {
        char curr_digit = digit[i];
        int num = curr_digit - '0';
        sum += num;
    }
    string extra_digit = to_string(sum);
    int ret_sum = 0;
    for (int i = 0; i < extra_digit.size(); i++)
    {
        char curr_digit = extra_digit[i];
        int num = curr_digit - '0';
        ret_sum += num;
    }
    return ret_sum;
}

int main()
{
    cout << digital_root(16) << '\n';
    cout << digital_root(195) << '\n';
    cout << digital_root(992) << '\n';
    cout << digital_root(167346) << '\n';
    cout << digital_root(0) << '\n';
}