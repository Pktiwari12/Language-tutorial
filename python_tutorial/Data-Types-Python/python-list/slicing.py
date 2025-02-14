list1 = ['p', 'r' ,'a', 'd' , 'e', 'e', 'p']
print(list1)

print("After Slicing")
print("list1[2:5]",list1[2:5])

# following three  prints empty, because (staring index >= end index)
print("list1[5: 1]",list1[5:1])
print("list1[2:-6]",list1[2:-6])
print("list1[2:-5]",list1[2:-5])
# so we have to be careful that while slicing a list, the starting index is less than end index(end index is excluded in slicing)


# omitting the start index , then the slicing is occured from start index
print("list1[:5]",list1[:5])

# ommiting the last index , then the slicing is occured upto last index 
print("list1[2:5]",list1[2:])