#!/usr/bin/python3
def search_replace(my_list, search, replace):
    new_list = list(map(lambda num: replace if num == search else num, my_list))
    return new_list
    
