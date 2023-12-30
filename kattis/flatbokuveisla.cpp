// https://open.kattis.com/problems/flatbokuveisla

#include <iostream>

using namespace std;

int main()
{
    int num_of_slices;
    int num_of_residents;

    cin >> num_of_slices;
    cin >> num_of_residents;

    cout << num_of_slices % num_of_residents;
}