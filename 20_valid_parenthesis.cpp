#include <iostream>
#include <stack>
#include <string>

using std::cout; 
using std::stack; 
using std::string;  
/* 
 * see: 
 *
 * space: O(n) 
 * time:  O(n) 
*/ 
bool isValid(string s)
{
    stack<char> bracket;
    for (char& c : s)
    {
        switch (c) 
	{
            case '(': bracket.push(c); break;
            case '{': bracket.push(c); break;
            case '[': bracket.push(c); break;
            case ')': if (bracket.empty() || bracket.top()!='(') return false; else bracket.pop(); break;
            case '}': if (bracket.empty() || bracket.top()!='{') return false; else bracket.pop(); break;
            case ']': if (bracket.empty() || bracket.top()!='[') return false; else bracket.pop(); break;
            default: ; 
        }
    }
    return bracket.empty();
}
int main() 
{
	string s1 = "()"; 
	string s2 = "()[]{}"; 
	string s3 = "(]"; 

	(isValid(s1)) ? cout << "valid\n" : cout << "invalid\n"; 
	(isValid(s2)) ? cout << "valid\n" : cout << "invalid\n";
	(isValid(s3)) ? cout << "valid\n" : cout << "invalid\n";
} 
