"""

see: https://www.codewars.com/kata/57a0e5c372292dd76d000d7e/python

Write a function that accepts an integer n and a string s as parameters
, and returns a string of s repeated exactly n times.

Ex.
6, "I"     -> "IIIIII"
5, "Hello" -> "HelloHelloHelloHelloHello"
"""


def repeat_str(repeat, string):
    return repeat * string


print(repeat_str(5, "hi"))
