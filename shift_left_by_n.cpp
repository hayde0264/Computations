#include <iostream>
#include <algorithm>

using std::cout; 

void reverse(int *arr, int i, int j) { 
	while (i < j) {
		std::swap(arr[i], arr[j]); 
		i++; 
		j--; 
	} 
} 

void shift_left(int *arr, int n, int k) { 
	k %= n; 
	reverse(arr, 0, k - 1); 
	reverse(arr, k, n - 1); 
	reverse(arr, 0, n - 1); 
} 

int main() { 
	int arr[] = { 1, 2, 3, 4, 5 }; 
	int len = sizeof(arr) / sizeof(arr[0]); 
	int k = 2; 

	cout << "pre rotate... "; 
	for (int i = 0; i < len; i++) 
		cout << arr[i] << " "; 
	cout << '\n'; 

	shift_left(arr, len, k); 

	cout << "post rotate... "; 
	for (int i = 0; i < len; i++) 
		cout << arr[i] << " "; 
	cout << '\n'; 

	return 0; 
}
