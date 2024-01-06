#include <iostream>
#include <string>

using namespace std;

void rev_str(string &str, int left, int right)
{

    if (left >= right)
        return;

    char temp = str[left];
    str[left] = str[right];
    str[right] = temp;

    rev_str(str, left + 1, right - 1);
}
/*

rev_str("hayden", 0, 5):
    temp = 'h'
    str[0] = 'n'
    str[5] = 'h'
    rev_str("hayden", 1, 4);

                                rev_str("hayden", 1, 4):
                                    temp = 'a'
                                    str[1] = 'e'
                                    str[4] = 'a'
                                    rev_str("hayden", 2, 3);

                                                            rev_str("hayden", 2, 3):
                                                                temp = 'y'
                                                                str[2] = 'd'
                                                                str[3] = 'y'
                                                                rev_str("hayden", 3, 2)

                                                                                        rev_str("hayden", 3, 2):
                                                                                            return;


                                                            rev_str("hayden", 2, 3):
                                                                None;

                                rev_str("hayden", 1, 4):
                                    None;

rev_str("hayden", 0, 5):
    None;
*/

int main()
{
    string a = "hayden";
    rev_str(a, 0, a.size() - 1);

    cout << a << '\n';

    return 0;
}