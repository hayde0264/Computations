"""

see: https://www.codewars.com/kata/57eadb7ecd143f4c9c0000a3/train/python

Write a function to convert a name into initials. This kata strictly takes
two words with one space in between them. The output should be two capital
letters with a dot separating them.

Ex.
Sam Harris => S.H
patrick feeney => P.F
"""


def abbrev_name(name):
    return ".".join([word[0].upper() for word in name.split()])


print(abbrev_name("Hayden Howell"))
