if __name__ == '__main__':
    s = input()
    arr = [False, False, False, False, False]
    for i in s:
        if i.isalnum():
            arr[0] = True
        if i.isalpha():
            arr[1] = True
        if i.isdigit():
            arr[2] = True
        if i.islower():
            arr[3] = True
        if i.isupper():
            arr[4] = True

    for word in arr:
        print(word)