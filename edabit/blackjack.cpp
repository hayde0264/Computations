#include <iostream>
#include <vector>

using namespace std;

bool overTwentyOne(vector<char> &cards)
{
    bool has_ace = false;
    int total_with_eleven = 11;
    int total_without_eleven = 1;
    int total_without_ace = 0;
    for (int i = 0; i < (int)cards.size(); ++i)
        if (cards[i] == 'A')
            has_ace = true;
    if (has_ace)
    {
        for (int i = 0; i < (int)cards.size(); ++i)
        {
            if (cards[i] == 'A')
                continue;
            else
            {
                int current = 0;

                switch (cards[i])
                {
                case '2':
                    current = 2;
                    break;
                case '3':
                    current = 3;
                    break;
                case '4':
                    current = 4;
                    break;
                case '5':
                    current = 5;
                    break;
                case '6':
                    current = 6;
                    break;
                case '7':
                    current = 7;
                    break;
                case '8':
                    current = 8;
                    break;
                case '9':
                    current = 9;
                    break;
                case 'J':
                    current = 10;
                    break;
                case 'Q':
                    current = 10;
                    break;
                case 'K':
                    current = 10;
                    break;
                default:
                    break;
                }

                total_with_eleven += current;
                total_without_eleven += current;
            }
        }
        if (total_with_eleven || total_without_eleven <= 21)
            return true;
    }
    else
    {
        for (int i = 0; i < (int)cards.size(); ++i)
        {
            int current = 0;

            switch (cards[i])
            {
            case '2':
                current = 2;
                break;
            case '3':
                current = 3;
                break;
            case '4':
                current = 4;
                break;
            case '5':
                current = 5;
                break;
            case '6':
                current = 6;
                break;
            case '7':
                current = 7;
                break;
            case '8':
                current = 8;
                break;
            case '9':
                current = 9;
                break;
            case 'J':
                current = 10;
                break;
            case 'Q':
                current = 10;
                break;
            case 'K':
                current = 10;
                break;
            default:
                break;
            }
            total_without_ace += current;
        }
        if (total_without_ace <= 21)
            return true;
    }
    return false;
}

int main()
{
    vector<char> v = {'A', 'J', 'K'};
    cout << overTwentyOne(v) << endl;
}