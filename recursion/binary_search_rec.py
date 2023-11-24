def binary_search_rec(arr, num, left, right):
    mid = (left + right) // 2
    if left > right:
        return -1
    elif arr[mid] == num:
        return mid
    elif arr[mid] < num:
        return binary_search_rec(arr, num, mid + 1, right)
    else:
        return bin(arr, num, left, mid - 1)


def binary_search(arr, num):
    return binary_search_rec(arr, num, 0, len(arr) - 1)


if __name__ == "__main__":
    pass
