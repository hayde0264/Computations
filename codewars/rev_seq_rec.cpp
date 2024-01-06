// https://codewars.com/kata/5a00e05cc374cb34d100000d/train/cpp

#include <iostream>
#include <vector>

using namespace std;

vector<int> revSeq(int n)
{
    if (n == 1)
        return {1};
    else
    {
        vector<int> v = revSeq(n - 1);
        v.insert(v.begin(), n);
        return v;
    }
}
int main()
{

    auto v = revSeq(5);
    for (auto i : v)
        cout << i << '\t';

    return 0;
}
/*
revSeq(5):
    v = revSeq(4)
    v = {5}
    return v;

                    revSeq(4):
                        v = revSeq(3)
                        v = {5, 4}
                        return v;

                                        revSeq(3):
                                            v = revSeq(2)
                                            v = {5, 4, 3}
                                            return v;


                                                        revSeq(2):
                                                            v = reqSeq(1)
                                                            v = {5, 4, 3, 2}
                                                            return v;


                                                                            revSeq(1):
                                                                                return {1};


                                                        revSeq(2):
                                                            None;

                                        revSeq(3):
                                            None;

                    revSeq(4):
                        None;


revSeq(5):
    None;
*/
