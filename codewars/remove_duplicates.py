"""

see: https://www.codewars.com/kata/57a5b0dfcf1fa526bb000118/python

Define a function that removes duplicates from an array of non negative
numbers and returns it as a result.

The order of the sequence has to stay the same.

Ex.
Input -> Output
[1, 1, 2] -> [1, 2]
[1, 2, 1, 1, 3, 2] -> [1, 2, 3]
"""


def distinct(seq):
    nl = []
    [nl.append(i) for i in seq if i not in nl]
    return nl


print(distinct([1, 1, 2]))
