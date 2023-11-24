def fib(n):
    if n <= 1:
        return n
    else:
        return fib(n - 1) + fib(n - 2)


if __name__ == "__main__":
    print(fib(10))
    """ 
    fib(10):
        fib(9) + fib(8) 

            fib(9): 
                fib(8) + fib(7)

                    fib(8): 
                        fib(7) + fib(6)

                            fib(7): 
                                fib(6) + fib(5)

                                    fib(6): 
                                        fib(5) + fib(4)

                                            fib(5): 
                                                fib(4) + fib(3)

                                                    fib(4):
                                                        fib(3) + fib(2)

                                                            fib(3): 
                                                                fib(2) + fib(1)

                                                                    fib(2): 
                                                                        fib(1) + fib(0)

                                                                            fib(1): 
                                                                                RETURN 1

                                                                                    fib(0): 
                                                                                        RETURN 1

                                                                    fib(2): 
                                                                        fib(1) == 1 
                                                                        fib(0) == 1
                                                                        fib(1) + fib(0) == fib(2)
                                                                        FIB(2) == 2

                                                            fib(3): 
                                                                fib(2) == 2
                                                                fib(1) == 1
                                                                fib(2) + fib(1) == fib(3)
                                                                FIB(3) == 3

                                                    fib(4): 
                                                        fib(3) == 3 
                                                        fib(2) == 2
                                                        fib(3) + fib(2) == fib(4)
                                                        FIB(4) == 5 

                                            fib(5): 
                                                fib(4) == 5 
                                                fib(3) == 3 
                                                fib(4) + fib(3) == fib(5)
                                                FIB(5) == 8 

                                    fib(6): 
                                        fib(5) == 8 
                                        fib(4) == 5 
                                        fib(5) + fib(4) == fib(6)
                                        FIB(6) == 13

                            fib(7): 
                                fib(6) == 13 
                                fib(5) == 8 
                                fib(6) + fib(5) == 21 
                    
                    fib(8): 
                        fib(7) == 21
                        fib(6) == 13
                        fib(7) + fib(6) == fib(8)
                        FIB(8) == 34 

            fib(9): 
                fib(8) == 34 
                fib(7) == 21 
                fib(8) + fib(7) == 55 
                FIB(9) == 45 
    fib(10): 
        fib(9) == 55
        fib(8) == 34
        fib(9) + fib(8) == 89
        FIB(10) == 89
                                                
    PRINT 55                                                       
    """
