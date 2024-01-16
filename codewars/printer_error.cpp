// https://www.codewars.com/kata/56541980fa08ab47a0000040/train/cpp

#include <iostream>
#include <string>

using namespace std;

class Printer
{
  public:
    static std::string printerError(const std::string &s)
    {
        int len = s.size();
        int incorrect = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] >= 97 && s[i] <= 109)
                continue;
            else
                incorrect++;
        }
        string ret = "";
        ret += to_string(incorrect);
        ret += '/';
        ret += to_string(len);
        return ret;
    }
};

int main()
{
    Printer *p = new Printer();
    cout << p->printerError("aaaxbbbbyyhwawiwjjjwwm");
    delete p;
}