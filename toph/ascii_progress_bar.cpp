// https://toph.co/p/ascii-progress-bar

#include <iostream>

using namespace std;

void run()
{
    float num;
    cin >> num;
    string ret = "[";
    int total = 10;
    int first = num / 10;
    for (int i = 0; i < first; ++i)
        ret += '+';
    for (int i = 0; i < (total - first); ++i)
        ret += '.';
    ret += "]";
    ret += ' ';
    int f = num;
    ret += to_string(f);
    ret += '%';
    cout << ret;
}
int main()
{
    run();
    return 0;
}