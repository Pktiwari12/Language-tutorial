n1 = int(input("Enter a number"))
n2 = int(input("Enter a denominator."))
try:
    print(n1/n2)
except ZeroDivisionError:
    print("Denominator should not be 0")
    
