// https://toph.co/p/alayna-and-vowels

#include <iostream>
#include <string>

using namespace std;

void run()
{
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' ||
            s[i] == 'O' || s[i] == 'u' || s[i] == 'U')
            count++;
    }
    cout << count;
}

int main()
{
    run();
    return 0;
}