"""

see: https://www.codewars.com/kata/55908aad6620c066bc00002a/train/python

Check to see if a string has the same amount of 'x's and 'o's. The method
must return a boolean and be case insensitive. The string can contain any
char.

Ex.
XO("ooxx") => true
XO("xooxx") => false
XO("ooxXm") => true
XO("zpzpzpp") => true // when no 'x' and 'o' is present should return true
XO("zzoo") => false

"""


def xo(s: str):
    if s.lower().count("x") == s.lower().count("o"):
        return True
    else:
        return False


print(xo("zzoo"))
print(xo("xoxo"))
