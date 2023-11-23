#include <iostream>
#include <string>

using std::cout;
using std::string;

// algorithm
void revString(string &str)
{
    int i = 0;
    int j = str.length() - 1;
    char temp;
    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

// driver
int main()
{
    string name = "madie";
    revString(name);
    cout << name << '\n';
    return 0;
}
