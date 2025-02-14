marks = [20 , 12, 14, 25, 35, 29]
print("Original Marks\n")
print(marks)

# changing element by accessing it's index
marks[2] = 50
print("Updated index 2")
print(marks)

#deletion in list

#1. delete by remove method which is deleted by value
marks.remove(25)
print("After removeing the 25")
print(marks)

#2. Removing by del method
del marks[0]
print("After removing the 0th index")
print(marks)

del marks[1:3]
print("After  deleting the elemet (1:3)")
print(marks)

# delete the entire list
del marks
print("After deleting the whole list")
# print(marks)        #// this creates a error