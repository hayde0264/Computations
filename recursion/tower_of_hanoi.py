def tower_of_hanoi(arr, source="A", auxilary="B", destination="C"):
    if arr == 1:
        print("from", source, "to", destination)
    else:
        tower_of_hanoi(arr - 1, source, destination, auxilary)
        print("from", source, "to", destination)
        tower_of_hanoi(arr - 1, auxilary, source, destination)


if __name__ == "__main__":
    pass
