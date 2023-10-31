#!/usr/bin/python3

print("hello enter 3 number interger :")

a = int(input("enter number 1 :"))
b = int(input("enter number 2 :"))
c = int(input("enter number 3 :"))

if a >= b and a >= c :
		print(f"{a} is greatest\n")
elif b >= a and  b >= c:
		print(f"{b} is greatest\n")
elif  c >= a and c >= b:
		print(f"{c} is greatest\n")
