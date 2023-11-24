def merge_sort(arr):
    if len(arr) <= 1:
        return arr
    else:
        mid = len(arr) / 2
        left = arr[:mid]
        right = arr[mid:]
        left = merge_sort(left)
        right = merge_sort(right)
        return merge_sort(left, right)


if __name__ == "__main__":
    print(merge_sort([5, 2, 4, 1]))
    """ 
    """
