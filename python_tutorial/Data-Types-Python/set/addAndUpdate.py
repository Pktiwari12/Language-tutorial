# Program to add element into set and update set (not changing individual element)
companies = {"google", "microsoft", "Apple"}
print("Original set = ", companies)
companies.add("TCS")
print("After adding tcs",companies)


# update whole list, tuple, set  in to the set
other = ["Wipro", "X", "Facebook", "X", "X"]
companies.update(other)
print(other)
print(companies)

