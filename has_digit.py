"""

see: https://edabit.com/challenge/nqvuJue4TevAERzCs

Write a regular expression that matches a string if it
contains at least one digit.

Ex.
has_digit("c8") ➞ True
has_digit("23cc4") ➞ True
has_digit("abwekz") ➞ False
has_digit("sdfkxi") ➞ False

"""

import re


def has_digit(txt):
    return bool(re.search(r"\d", txt))


print(has_digit("c8"))
print(has_digit("aaa"))
print(has_digit("288bl"))
