#include <stdio.h>
#include <string.h>

/*
 *
 * space: O(1)
 * time:  O(n2)
 */

void findPattern(char *pattern, char *text)
{
    const int text_len = strlen(text);
    const int patt_len = strlen(pattern);
    for (int i = 0; i <= text_len - patt_len; i++)
    {
        int j;
        for (j = 0; j < patt_len; j++)
        {
            if (text[i + j] != pattern[j])
                break;
        }
        if (j == patt_len)
        {
            printf("Pattern found at index %d...\n", i);
            return;
        }
    }
    printf("No pattern found...\n");
}
int main()
{
    char name[] = "hayden";
    char pattern[] = "den";
    findPattern(pattern, name);
    return 0;
}
