def move_zeros(arr):
    z = 0
    for i in range(len(arr)):
        if arr[i] != 0:
            arr[i], arr[z] = arr[z], arr[i]
            z += 1
    return arr
