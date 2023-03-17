#!/usr/bin/python3
def best_score(a_dictionary):
    if a_dictionary is None:
        return None
    best = 0
    for key in a_dictionry:
        if best < a_dictionary[key]:
            best = key
    return best
