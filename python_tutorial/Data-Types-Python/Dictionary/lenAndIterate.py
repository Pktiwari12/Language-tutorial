dict1 = {
    "Uttar Pradesh": "Lucknow",
    "Madhya Pradesh": "Bhopal",
    "Rajsthan": "Jaipur",
    "Maharashtra": "Mumbai"
}

print(dict1)
print("The lenth of dict1", len(dict1))



# interating the dictionary
for  state in dict1:
    capital = dict1[state]
    print(state, " - ", capital)
print()
    
