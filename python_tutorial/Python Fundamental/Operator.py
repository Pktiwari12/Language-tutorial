#Arithmetic Operator
a = int(input("Enter a number\t"))
b = int(input("Enter anohter number\t"))
#addition
c = a + b
print("The addition of two number\t",c)
c = a-b 
print("The substraction of given two numbers \t",c)
c = a * b
print("The multiplication of two numbers \t",c)
c = a / b
print("The division of two numbers \t",c)

# floor division
c = a // b
print("The floor division value of two numbers \t",c)

# power function
c = a ** b
print("The value of a to the power b\t",c)

# Modulous value of two number
c = a % b
print("The modulous value of two number",c)



# comparison operator 
print("a = b\t", a==b)
print("a != b\t", a!=b)
print("a<b\t", a<b)
print("a>b", a>b)
print("a<=b", a<=b)
print("a>=b", a>=b)

# logical operator

# And Operatoer
print('for and operator \n')
print(True and True)
print(True and False)
print(False and False)

# or operator
print("For or operator \n")
print(True or True)
print (True or False)
print(False or False)


# not operator
print ("For not operaoter \n")
print(not False)
print(not True)




# Python Special Operator 
x = 5
y = 5
x1 = "Hello"
y1 = "Hello"
x2 = [1,2,3]
y2 = [1,2,3]

print("x is y", x is y)
print("x is not y", x is not y)
print("x1 is y1", x1 is y1)
print("x1 is not y1",x1 is not y1)
print("x2 is not y2", x2 is not y2)
print("x2 is  y2", x2 is y2)

# here we see, for (x , y ) and (x1 , y1) "is " prints true becaus they are identical with type and value
# but for list their values are same but they are not identical so "is " prints false





# Membership Operators  ;       in , not in 
print('\n\nMembership Operator \n')
str = "Pradeep Tiwari "
dict1 = {'1':'apple' , '2':'mango'}

# checking Prad in present in str
print("Prad " in str)
print("Prad" in str)
print ('prad' in str)
print ("kumar" not in str)

# checking in dictionay
print("1" in dict1)
print("mango" in dict1)         # this print false becaus this is value not key
print("3" in dict1)