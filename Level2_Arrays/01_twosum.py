# Given an array of integers nums and an integer target,
# return the indices of the two numbers such that they add up to target.
# Assume that each input would have exactly one solution, and you may not use the same element twice.

def two_sum_approach_1(arr : list, target):
    
    seen = {}
    for i, num in enumerate(arr):
        complement = target - num
        if complement in seen:
            return seen[complement], i
        seen[num] = i




