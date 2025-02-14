# String as a key and values
dict1 = {
    "Uttar Pradesh": "Lucknow",
    "Madhya Pradesh": "Bhopal",
    "Rajsthan": "Jaipur"
}
print(dict1, "\t\t\t", type(dict1))


# key of dicationary must be immutable. and values will be any of both

# key int 
dict2 = {
    1: (2, 5),
    2: [3,4],
    3: {6,"hello"},
    4: {"Lucknow" : "UP",
        "Bhopal": "MP"
        }
}

print (dict2)