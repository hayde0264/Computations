"""

see: https://www.codewars.com/kata/5583090cbe83f4fd8c000051/python

Given a random non-negative number, you have to return the digits of
this number within an array in reverse order.

Ex.
35231 => [1,3,2,5,3]
0 => [0]
"""


def digitize(n):
    return [int(i) for i in str(n)[::-1]]


print(digitize(123))
a = 123
print(str(a))
