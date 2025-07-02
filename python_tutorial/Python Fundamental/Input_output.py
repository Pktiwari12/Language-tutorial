# simple printing the content
print("Exploring the print() function .")

# printing the literals and variables
x = 5
name = 'pradeep'
print(x)
print("name")
print(name)


# exploring the 5 parameters of the print function
print ("Veer", "yadav")
print("Abhay"+"Dixit")
print("name is ",name,"kumar","Tiwari",sep='-',end='\n')
print("class")

# another two parameters for FILE and FLUSH


#formating the print function   str.format()
print("The name of the student = \t{}\n the age of the student \t{}".format(name , x))




#input from the user;        input(prompt)
school = input("Enter your school name\t")
className = input ("Enter your class name\t")
print("Your scholl name is \t{}\n the class in which you are studying\t{}".format(school , className))
print("The type of school ",type(school))
print("The type of className",type(className))


marks = input("Input marks")
print(type(marks))
# the type of className is string
# so we convert into int
marks = int(input("Enter your marks \n"))
print("your marks is \t",marks,"and the typeof marks",type(marks))