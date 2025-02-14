# Program to understand the adding the element in the list

fruits = ["Apple" , "Orange", "Mango"]
print("Orginal Fruits \t", fruits)

print("After appending")
fruits.append(["Cherry", "Grapes"])
print(fruits)


#adding element at specific position

fruits.insert(2, "Guava")
print("After inserting guave at index 2")
print("Price of the fruits")
print(fruits)


# Adding Element to a list from other iterables
price = [23, 12, 122, 20, [23, 12]]
print(price)
print("\n\n")
fruits.extend(price)
print("After extending the fruits with price list")
print(fruits)