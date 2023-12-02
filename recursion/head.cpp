// example of head recursion
#include <iostream>
using namespace std;

void fun(const int &i)
{
    if (i > 0)
    {
        fun(i - 1);
        cout << i << '\n';
    }
}

int main()
{
    fun(5);
    /*

    void fun(5)
        if (5 > 0)
        {
            fun(4);
        }
                        void fun(4)
                            if (4 > 0)
                            {
                                fun(3)
                            }

                                            void fun(3)
                                                if (3 > 0)
                                                {
                                                    fun(2)
                                                }

                                                            void fun(2)
                                                                if (2 > 0)
                                                                {
                                                                    fun(1)
                                                                }

                                                                            void fun(1)
                                                                                if (1 > 0)
                                                                                {
                                                                                    fun(0)
                                                                                }

                                                                                            void fun(0) = 0

                                                                            void fun(1)
                                                                                print(n + '\n') -> 1

                                                            void fun(2)
                                                                print(n + '\n') -> 2

                                            void fun(3)
                                                print(n + '\n') -> 3

                            void fun(4)
                                print(n + '\n') -> 4

        void fun(5)
            print(n + '\n') -> 5
    */
}