#include <iostream>
#include <string>
using namespace std;
namespace log_line
{

string message(string s)
{
    int start = s.find(" ");
    return s.substr(start + 1);
}
string log_level(string s)
{
    int start = s.find("[") + 1;
    int stop = s.find("]") - 1;
    return s.substr(start, stop);
}
string reformat(string s)
{
    int message = s.find(" ");
    string full_message = s.substr(message + 1);
    int log_level_start = s.find("[") + 1;
    int log_level_end = s.find("]") - 1;
    string full_log_level = s.substr(log_level_start, log_level_end);
    return full_message + " (" + full_log_level + ")";
}

} // namespace log_line

int main()
{
    cout << log_line::message("[ERROR]: Invalid Operatoin") << '\n';
    cout << log_line::log_level("[ERROR]: Invalid Operation") << '\n';
    cout << log_line::reformat("[INFO]: Operation Completed") << '\n';

    return 0;
}
