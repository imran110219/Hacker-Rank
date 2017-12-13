from __future__ import print_function
if __name__ == '__main__':
    N = int(raw_input())
    list = []
    for x in range(N):
        s = raw_input().split()
        operation = s[0]
        if operation == "insert":
            list.insert(int(s[1]), int(s[2]))
        elif operation == "remove":
            list.remove(int(s[1]))
        elif operation == "append":
            list.append(int(s[1]))
        elif operation == "sort":
            list.sort()
        elif operation == "pop":
            list.pop()
        elif operation == "reverse":
            list.reverse()
        else:
            print(list)