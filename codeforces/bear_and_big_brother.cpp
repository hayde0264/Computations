#include <iostream>

using namespace std;

int main()
{
    int limak_weight;
    int bob_weight;

    cin >> limak_weight;
    cin >> bob_weight;

    int num_of_years = 0;

    while (true)
    {
        num_of_years++;
        limak_weight *= 3;
        bob_weight *= 2;
        if (limak_weight > bob_weight)
            break;
    }

    cout << num_of_years;
}