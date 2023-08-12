"""

see: https://edabit.com/challenge/rix73vi9mFYWWqPoA

You are given two lists that contain data that represent
the min and max weather temperatures for each day of the
week.

The record list contais the all-time record low/high temperatures
for that day of the week.
Ex.
[[record low, record high]]

The current week list contains the daily low/high temperatures
for each day of the current week.
Ex.
[[daily low, daily high]]

A daily high temperature is considered a new record high if it is
higher than the record high for that day of the week. A daily low
temperature is considered a new record low if it is lower than the
record low for that day of the week.

Ex.
#             sun       mon      tues       wed      thur      fri       sat
record_temps([[34, 82], [24, 82], [20, 89],  [5, 88],  [9, 88], [26, 89], [27, 83]],
            [[44, 72], [19, 70], [40, 69], [39, 68], [33, 64], [36, 70], [38, 69]])

➞           [[34, 82], [19, 82], [20, 89], [5, 88], [9, 88], [26, 89], [27, 83]]


"""


def record_temps(records, currentWeek):
    return [[min(i[0], j[0]), max(i[1], j[1])] for i, j in zip(r, c)]
