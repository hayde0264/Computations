class Array:
    def __init__(self) -> None:
        self.length = 0
        self.data = {}

    def __str__(self) -> str:
        """prints the attributes in array"""
        print(self.data.values())
        return str(self.__dict__)

    def get(self, index) -> int:
        """takes index of element as parameter and returns corresponding element in O(1) time"""
        return self.data[index]

    def push(self, item) -> None:
        """adds the item parameter to the end of the array"""
        self.length += 1
        self.data[self.length - 1] = item

    def pop(self) -> int:
        """finds last element of array, deletes the last element from array, decremenets the length by 1, and returns the popped element. O(1) time"""
        last = self.data[self.length - 1]
        del self.data[self.length - 1]
        self.length -= 1
        return last

    def insert(self, index, item) -> None:
        self.length += 1
        for i in range(self.length - 1, index, -1):
            self.data[i] = self.data[i - 1]
        self.data[index] = item

    def delete(self, index) -> None:
        for i in range(index, self.length - 1):
            self.data[i] = self.data[i + 1]
        del self.data[self.length - 1]
        self.length -= 1


arr = Array()
arr.push(1)
arr.push(2)
print(arr)
