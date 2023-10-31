#!/usr/bin/python3

print("========================calculator for 2 variables ========================")


a = float(input("enter first number :"))
operator = input("enter your arithmetic operator : + - * / % : ")
b = float(input("enter second number :"))
c = 0


match operator:
    case "+":
        c = a + b
        print(f"{a} {operator} {b} = {c}")
    case "-":
        c = a - b
        print(f"{a} {operator} {b} = {c}")
    case "*":
        c = a * b
        print(f"{a} {operator} {b} = {c}")
    case "/":
        if b == 0:
            print("can't be divised by 0")
        else:
            c = a / b
            print(f"{a} {operator} {b} = {c}")
    case "%":
        c = a % b
        print(f"{a} {operator} {b} = {c}")
    case _:
        print("operator doesn't exsit")
