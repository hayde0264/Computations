"""

see: https://edabit.com/challenge/MbPpxYWMRihFeaNPB

Create a function that returns the sum of all even
elements in a 2D matrix.

Ex.

sum_of_evens([
  [1, 0, 2],
  [5, 5, 7],
  [9, 4, 3]
]) ➞ 6

// 2 + 4 = 6

sum_of_evens([
  [1, 1],
  [1, 1]
]) ➞ 0

sum_of_evens([
  [42, 9],
  [16, 8]
]) ➞ 66

sum_of_evens([
  [],
  [],
  []
]) ➞ 0

"""


def sum_of_evens(lst):
    reglst = []
    for i in lst:
        for item in i:
            reglst.append(item)
    return sum([x for x in reglst if x % 2 == 0])
