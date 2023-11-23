#include <stdio.h>

int main()
{
    int arr[] = {1, 1, 0, 0, 1, 0, 0, 1, 0, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }

    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}
