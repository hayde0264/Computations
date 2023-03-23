#include <stdio.h>

void swap(int arr[], int i, int j) {
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

void moveZeros(int arr[], int len) {
  int j = 0;
  for (int i = 0; i < len; i++) {
    if (arr[i] != 0) {
      swap(arr, i, j);
      j++;
    }
  }
}

int main() {
  int arr[] = {1, 2, 4, 1, 0, 0, 11, 1, 3, 0, 0};
  int len = sizeof(arr) / sizeof(arr[0]);

  moveZeros(arr, len);

  for (int i = 0; i < len; i++) printf("%d, ", arr[i]);

  return 0;
}
