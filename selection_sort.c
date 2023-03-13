#include <stdio.h>

void swap(int *i, int *j);
void selection_sort(int arr[], int n);
int main() {
  int arr[] = {11, 0, 2, 33, 1, 3};
  selection_sort(arr, 6);
  for (int i = 0; i < 6; i++) {
    printf("%d, ", arr[i]);
  }
  return 0;
}
void swap(int *i, int *j) {
  int temp = *i;
  *i = *j;
  *j = temp;
}
void selection_sort(int arr[], int n) {
  int i, j, min_idx;
  for (i = 0; i < n - 1; i++) {
    min_idx = i;
    for (j = i + 1; j < n; j++) {
      if (arr[j] < arr[min_idx]) min_idx = j;
      if (min_idx != i) swap(&arr[min_idx], &arr[i]);
    }
  }
}
