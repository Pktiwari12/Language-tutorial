string1 = "Jai Shree Ram"
print(string1)
print("/n/n")
string2 = ''' Hi this 
is multiline string.
so write whatever you want'''
print(string2)

name1 = "Pradeep"
name2 = "pradeep"
name3 = "Pradeep"
print(name1 == name2)
print(name1 == name3)

name = name1 + "Tiwari" + name2
print(name)



# String Membership test
print('p' in name1)
print('P' in name2)

# slicing 
print(name2[1 : 4])
#negative indexing
print(name2[-6])

#length of the string
print(len(name2))