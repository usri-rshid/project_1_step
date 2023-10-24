#!/usr/bin/python3


a = int(input("hello enter first number :"))

b = int(input("enter a second number : "))

print(f"before swap {a} and {b}")

temp = a
a = b
b = temp

print(f"after swap {a} and {b}")
