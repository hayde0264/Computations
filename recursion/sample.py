def fun(n):
    if n > 0:
        return fun(n - 1) + n
    return 0


if __name__ == "__main__":
    print(fun(5))
    """ 
    fun(5): 
        return fun(4) + 5 
                            fun(4): 
                                return fun(3) + 4 

                                                fun(3): 
                                                    return fun(2) + 3 

                                                                    fun(2): 
                                                                        return fun(1) + 2 

                                                                                            fun(1): 
                                                                                                return fun(0) + 1 

                                                                                                                fun(0): 
                                                                                                                    return 0 

                                                                                            fun(1): 
                                                                                                0 + 1 = 1 

                                                                    fun(2): 
                                                                        1 + 2 = 3 
                                                
                                                fun(3): 
                                                    3 + 3 = 6 

                            fun(4): 
                                6 + 4 = 10 

    fun(5): 
        10 + 5 = 15
                
    """
