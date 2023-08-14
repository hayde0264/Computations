"""

see: https://www.codewars.com/kata/56676e8fabd2d1ff3000000c

Write a function findNeedle() that takes an array full of junk but
containing one "needle" After your function finds the needle it should
return a message (as a string) that says: "found the needle at position "
plus the index it found the needle.

Ex.
["hay", "junk", "hay", "hay", "moreJunk", "needle", "randomJunk"] --> "found the needle at position 5"

"""


def find_needle(haystack: list):
    return f"found the needle at position {haystack.index('needle')}"


print(find_needle(["hay", "junk", "hay", "hay", "moreJunk", "needle", "randomJunk"]))
