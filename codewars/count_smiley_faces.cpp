// https://www.codewars.com/kata/583203e6eb35d7980400002a/train/cpp

#include <iostream>
#include <vector>

using namespace std;

int countSmileys(const vector<string> &arr)
{
    int count = 0;
    vector<string> valid = {":D", ":~)", ";~)", ":)"};
    for (int i = 0; i < arr.size(); ++i)
    {
        string current = "";
        for (int j = 0; j < arr[i].size(); ++j)
        {
            current += arr[i][j];
        }
        for (int z = 0; z < valid.size(); ++z)
        {
            if (valid[z] == current)
                count++;
        }
        current.clear();
    }
    return count;
}

int main()
{
    cout << countSmileys({":D", ":~)", ";~)", ":)"}) << '\n';
    cout << countSmileys({":)", ":(", ":D", ":O", ":;"}) << '\n';
    return 0;
}