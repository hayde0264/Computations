#include <iostream>
#include <string>
using namespace std;

void generatePermutations(string str, int left, int right)
{
    if (left == right)
    {
        cout << str << endl;
        return;
    }

    for (int i = left; i <= right; ++i)
    {
        swap(str[left], str[i]);
        generatePermutations(str, left + 1, right);
        swap(str[left], str[i]); // Backtrack
    }
}

int main()
{
    string input = "abc";

    generatePermutations(input, 0, input.size() - 1);

    return 0;
}
