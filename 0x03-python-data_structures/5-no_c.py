#!/usr/bin/python3
def no_c(my_string):
    for chr in my_string:
        if chr == 'c' or chr == 'C':
            del chr
