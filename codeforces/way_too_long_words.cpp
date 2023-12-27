// https://codeforces.com/problemset/problem/71/A

#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

int main()
{
    int num_of_words;
    cin >> num_of_words;

    vector<string> words{};
    vector<int> lengths{};

    for (int i = 0; i < num_of_words; ++i)
    {
        string word = "";
        cin >> word;
        words.push_back(word);
        lengths.push_back(word.size());
    }

    for (int i = 0; i < num_of_words; ++i)
    {
        if (lengths[i] <= 10)
            cout << words[i] << '\n';
        else
            cout << words[i][0] << words[i].length() - 2 << words[i].back() << '\n';
    }
}