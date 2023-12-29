#include <iostream>

using namespace std;

int main()
{
    int num_of_voters;
    cin >> num_of_voters;

    int votes[num_of_voters];

    for (int i = 0; i < num_of_voters; ++i)
    {
        int input;
        cin >> input;
        votes[i] = input;
    }

    string result = "";

    for (const int &i : votes)
        if (i == 1)
        {
            result = "HARD";
            break;
        }

    if (result == "HARD")
        cout << "HARD";
    else
        cout << "EASY";
}