/*
 * -----------------------------------------------------------------------------
 * see:
 * time:       O(n)
 * space:      O(1)
 *
 * Author -    Hayden Howell
 * Email  -    hayde0264@gmail.com
 * Date   -    03/20/2023
 * -----------------------------------------------------------------------------
 */

#include <iostream>

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void sort(int arr[], int len)
{
    int j = -1;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] < 1)
        {
            j++;
            swap(arr, i, j);
        }
    }
}

int main()
{
    int a[] = {1, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 1, 0, 0};
    int n = sizeof(a) / sizeof(a[0]);

    // Function call
    sort(a, n);
    for (int i = 0; i < n; i++)
        std::cout << a[i] << " ";

    return 0;
}
