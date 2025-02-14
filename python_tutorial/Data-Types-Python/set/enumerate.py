list1 = [1, 2, 3, 4]
enumeratedObject = enumerate(list1)
print(list(enumeratedObject))
enumeratedObject = enumerate(list1, 100)
print(set(enumeratedObject))

enumeratedObject = enumerate(list1, 100)
print(tuple(enumeratedObject))




# Loop  over the enumerated object 
city = {"Delhi", "kolkata", "Lucknow", "Rachi"}
print(city , "\t\t", type(city))

enumerateCity = enumerate(city)
print(list(enumerateCity), "\t\t", type(enumerateCity))

print("Loop over the inmuerated object")
# first way 
for eCity in enumerate(city):
    print(eCity)

print("\n\n")

for count , eCity in enumerateCity:
    print(count , eCity)
