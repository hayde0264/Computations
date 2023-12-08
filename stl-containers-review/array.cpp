#include <array>
using namespace std;

int main()
{
    // initializing an array
    array<int, 6> arr = {1, 2, 3, 4, 5, 6};

    // get the ith element: O(1) time
    arr.at(1); // => 2

    // get the ith element: O(1) time
    arr[2]; // => 3

    // get the size of the array: O(1) time
    arr.size(); // => 6

    // get the first element: O(1) time
    arr.front(); // => 1

    // get the last element: O(1) time
    arr.back(); // => 6

    return 0;
}