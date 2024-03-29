// https://www.codewars.com/kata/5266876b8f4bf2da9b000362
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string likes(const vector<string> &names)
{
    if (names.size() == 0)
        return "no one likes this";
    else if (names.size() == 1)
        return names[0] + " likes this";
    else if (names.size() == 2)
        return names[0] + " and " + names[1] + " like this";
    else if (names.size() == 3)
        return names[0] + ", " + names[1] + " and " + names[2] + " like this";
    else
        return names[0] + ", " + names[1] + " and " + to_string(names.size() - 2) + " others like this";
}

int main()
{
    vector<string> v1 = {"Hayden", "Olivia", "Megan", "Amy", "Ramona", "Elli"};
    cout << likes(v1) << '\n';
}