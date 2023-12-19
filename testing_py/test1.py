#!/bin/python
"""
Palindrome

Write a program to check if a given string is a palindrome or not. 
A palindrome is a word, phrase, number, or other sequence of characters that reads the same forward and backward.
"""

def palindrome(strg):
    rev_str = strg[::-1]
    for i, j in zip(strg, rev_str):
        if (i != j):
            return 0
        return 1


strg = input(
    "hello, enter the word, phrase, number, or other sequence of characters:\n")


if (palindrome(strg)):
    print(f"{strg} is a palindrome")
else:
    print(f"{strg} isn't a palindrome")
