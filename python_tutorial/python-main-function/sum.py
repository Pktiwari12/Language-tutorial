def sumOfTwo(a , b):
    print("inside of sumOfTwo",__name__)
    return a+b

print("Outside of sumOfTwo", "\t", __name__)
print(sumOfTwo(1,2))


# for current or main module , the __name__ is always __main__