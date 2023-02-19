name = input("Hello! I am calcbot. What is your name?")

z = input("Hi " + name + "! Please choose the action +, -, *, ** or / :")

a = float(input("Choose first number:"))

b = float(input("Choose second number:"))

if z == "+":
    c = a+b
    print("Result: " + str(c))
elif z == "-":
    c = a-b
    print("Result: " + str(c))
elif z == "*":
    c = a*b
    print("Result: " + str(c))
elif z == "/":
    c = a/b
    print("Result: " + str(c))
elif z == "**":
    c = a**b
    print("Result: " + str(c))
else:
    print("You choose incorrect action!")
input()
