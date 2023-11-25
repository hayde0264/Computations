#include <iostream>
#include <typeinfo>
using namespace std;

class Solution
{
public:
    string interpret(string command)
    {
        string ret = "";
        int ptr = 0;
        while (ptr < command.length())
        {
            char current = command[ptr];
            char next = command[ptr + 1];
            if (current == '(' && next == ')')
                ret.append("o");
            if (current == '(' && next == 'a')
                ret.append("al");
            if (current == 'G')
                ret.append("G");
            ptr++;
        }
        return ret;
    }
};

int main()
{
    Solution sol;
    cout << sol.interpret("G()(al)");
}