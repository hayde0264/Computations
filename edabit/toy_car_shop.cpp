#include <iostream>
using namespace std;

int cars(int wheels, int bodies, int figures)
{
    int total = 0;
    if (wheels < 4 || bodies < 1 || figures < 2)
        return 0;
    while (1)
    {
        wheels -= 4;
        bodies -= 1;
        figures -= 2;
        if (wheels >= 0 && bodies >= 0 && figures >= 0)
            total++;
        else
            return total;
    }
}

int main()
{
    cout << cars(88, 37, 17) << endl;
}