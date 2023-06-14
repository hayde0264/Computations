#include <string.h>

#include <cstdio>
#include <iostream>
#include <vector>

using std::string, std::vector;

/*
 * see:
 * https://www.hackerrank.com/challenges/birthday-cake-candles/problem?isFullScreen=true
 *
 * space:
 * time:
 */

// prototypes
string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

// algorithm
int birthdayCakeCandles(vector<int> candles)
{
    int tallest = 0;
    int len = candles.size();
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &candles[i]);
        if (candles[i] > tallest)
            tallest = candles[i];
        if (candles[i] == tallest)
            tallest++;
    }
    return tallest;
}
int main()
{
    int total = 0, result = 0;
    vector<int> candles{total};

    printf("How many candles are there\n");
    scanf("%d", &total);

    result = birthdayCakeCandles(candles);
    printf("%d\n", result);
    return 0;
}
