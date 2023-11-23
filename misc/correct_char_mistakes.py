"""

see: https://www.codewars.com/kata/577bd026df78c19bca0002c0/train/python

Character recognition software is widely used to digitise printed texts.
Thus the texts can be edited, searched and stored on a computer. When documents
(especially pretty old ones written with a typewriter), are digitised character
recognition softwares often make mistakes.

Ex.
S is misinterpreted as 5
O is misinterpreted as 0
I is misinterpreted as 1
"""


def correct(s: str):
    return s.replace("5", "S").replace("0", "O").replace("1", "I")


print(correct("501"))
