#include <stdio.h>

char *my_str_copy(char *destination, char *source)
{
    char *result;
    for (result = destination; (*destination++ = *source++);)
        ;
    return result;
}

int main()
{
    char str1[10] = "not so";
    char str2[10] = "best test";

    my_str_copy(str2, str1);

    return 0;
}
