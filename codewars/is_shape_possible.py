"""

see: https://edabit.com/challenge/K4aKGbfmzgyNNYEcM

Given the number n and a list of interior angles angles,
return whether or not it's possible to make a convex polygon
with n sides with the angles given. Remember that angles must be under 180°.

Ex.
is_shape_possible(4, [90, 90, 90, 90]) ➞ True
is_shape_possible(3, [20, 20, 140]) ➞ True
is_shape_possible(1, [21]) ➞ False
is_shape_possible(5, [500, 10, 10, 10, 10]) ➞ False

"""


def is_shape_possible(n, angles):
    s = sum(angles, 0)
    if s < 180:
        return True
    else:
        return False
