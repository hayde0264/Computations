// time: O(n)
// space: O(1)
// date: 03/28/2023

#include <stdio.h>

void reverse(int arr[], int low, int high)
{
    for (int i = low, j = high; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void rightRotate(int arr[], int k, int n)
{
    if (k < 0 || k >= n)
        return;
    // reverse the last "k" elements
    reverse(arr, n - k, n - 1);
    // reverse the first "n-k" elements
    reverse(arr, 0, n - k - 1);
    // reverse the whole array
    reverse(arr, 0, n - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    rightRotate(arr, k, n);
    for (int i = 0; i < n; i++)
        printf(" %d ", arr[i]);
    return 0;
}
