def rev_string(string):
    new_str = []
    for i in range(len(string) - 1, -1, -1):
        new_str.append(string[i])
    return "".join(new_str)


string = "hayden"
print(rev_string(string))
