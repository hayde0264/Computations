#include <stdio.h>

/*
 * see: https://dmoj.ca/problem/lkp18c2p1
 */

#define MAX_LINES 100

int shortest_line(int lines[], int *n);
void solve(int lines[], int *n, int *m);

int main()
{
    int lines[MAX_LINES];
    int n, m, i;
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &lines[i]);
        solve(lines, &n, &m);
    }
    return 0;
}
int shortest_line(int lines[], int *n)
{
    int j;
    int shortest = 0;
    for (j = 1; j < *n; j++)
    {
        if (lines[j] < lines[shortest])
        {
            shortest = j;
        }
    }
    return shortest;
}
void solve(int lines[], int *n, int *m)
{
    int i, shortest;
    for (i = 0; i < *m; i++)
    {
        shortest = shortest_line(lines, n);
        printf("%d\n", lines[shortest]);
        lines[shortest]++;
    }
}
