// https://codeforces.com/problemset/problem/1722/A

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void run()
{
    int total_cases;
    cin >> total_cases;

    int correct = 0;
    vector<string> v{};
    while (total_cases--)
    {
        int length_of_entry;
        cin >> length_of_entry;
        for (int i = 0; i < length_of_entry; ++i)
        {
            string word;
            cin >> word;
            v.push_back(word);
        }
    }
}

int main()
{
    run();
    return 0;
}