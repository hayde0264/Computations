"""

see: https://www.codewars.com/kata/5262119038c0985a5b00029f/python

Define a function that takes an integer argument and returns a logical
value true or false depending on if the integer is a prime. Per Wikipedia,
a prime number ( or a prime ) is a natural number greater than 1 that has
no positive divisors other than 1 and itself.

Ex.
is_prime(1)  /* false */
is_prime(2)  /* true  */
is_prime(-1) /* false */
"""


def is_prime(num):
    for i in range(2, num):
        if (num % i) == 0:
            return False
    return True
