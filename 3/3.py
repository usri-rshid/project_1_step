#!/usr/bin/python

a = int(input("hello, enter first number :"))

b = int(input("enter second number :"))

print(f"before swap {a} and {b}")

a , b =b , a
"""
a = a + b
b = a - b
a = a - b
"""

print(f"after swap {a} and {b}")
