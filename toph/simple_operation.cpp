// https://toph.co/p/simple-operation

#include <iostream>
#include <string>

using namespace std;

void run()
{
    int len;
    cin >> len;
    while (len--)
    {
        int a;
        int b;
        char c;
        for (int i = 0; i < 3; ++i)
        {
            int a1;
            int b1;
            char c1;

            if (i == 0)
            {
                cin >> a1;
                a = a1;
            }
            else if (i == 1)
            {
                cin >> c1;
                c = c1;
            }
            else
            {
                cin >> b1;
                b = b1;
            }
        }
        if (c == '+')
            cout << a + b << '\n';
        else if (c == '-')
            cout << "Case 2: " << a - b << '\n';
        else
            cout << "Case 1: " << a * b << '\n';
    }
}
int main()
{
    run();
    return 0;
}