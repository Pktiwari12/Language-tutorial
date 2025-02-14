# for loop for list
languages = ['English', 'hindi', 'Sanskirt', 'Bangali']
for lang in languages:
    print(lang)
    print("------")

print("Loop ended")


# loop through a string 
name = "Pradeep Kumar Tiwari"
for ch in name:
    print(ch , end = "\t")
print()
print("loop is ended through string")


# for loop with python range function 
for i in range(0 , 5):
    print(i , end = '\t')


# break  keyword
prog = ["GO" , "C++" , "Java" , "C", "Python"]
print("Introduction to break keyword.")
for lang in prog:
    if lang == 'C':
        break
    print(lang)

# continue keyword
print("Introduction to continue keyword.")
for lang in prog:
    if lang =="C":
        continue
    print(lang)



# to use loop without sequence , we use underscore(_)
for _ in range(0 , 5):
    print("Jai Shree Ram")




