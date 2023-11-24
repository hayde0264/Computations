def fact(n):
    if n == 1:
        return 1
    else:
        return n * fact(n - 1)


if __name__ == "__main__":
    print(fact(5))
    """ 
    fact(5): 
        5 * fact(4)

            fact(4): 
                4 * fact(3)

                    fact(3): 
                        3 * fact(2)

                            fact(2): 
                                2 * fact(1)

                                    fact(1): 
                                        1 * fact(0)  == 1 (fact1)

                            fact(2): 
                                2 * 1 (fact1) == 2 (fact2)

                    fact(3): 
                        3 * 2 (fact2) == 6 (fact3)

            fact(4): 
                4 * 6 (fact3) == 24 (fact4)

    fact(5): 
        5 * 24 (fact4) == 120 (fact5)

    ANSWER == 120
    """
