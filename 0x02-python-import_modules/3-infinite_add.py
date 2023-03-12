#!/usr/bin/python3
def add_arg(argv):
    n = len(argv) - 1
    if n == 0:
        print("{:d}".format(n))
        return
    else:
        i = 1
        res = 0
        while i <= n:
            res += int(argv[i])
            i += 1
        print("{:d}".format(res))

if __name__ == "__main__":
    import sys
    add_arg(sys.argv)
