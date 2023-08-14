def isPaldinrome(x: int):
    if x < 0:
        return False
    else:
        return str(x)[::-1] == str(x)


print(isPaldinrome(101))
