#!/usr/bin/python3
if __name__ == "__main__":
    import sys
    argv = sys.argv
    argc = len(argv) - 1
    if argc == 0:
        print("{:d}".format(0))
        return
    else:
        i = 1
        res = 0
        while i <= argc:
            res += argv[i]
            i += 1
        print("{:d}".format(res))
