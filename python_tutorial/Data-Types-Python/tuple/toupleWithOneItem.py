# The paranthesis with one element , can not create a tuple
name = ('Pradeep')      # this is considered as string
print(name)
print(len(name))
print (type(name))      
print(name[0])

# f = tuple((4)) # this gives an error
# print(f)


# so for one element we use trailing comman
fruits = ('banana',)
print(fruits)
print(len(fruits))