def sumOfTwo(a , b):
    print("inside of sumOfTwo",__name__)
    return a+b

if (__name__ == "__main__"):
    print("Outside of sumOfTwo", "\t", __name__)
    print(sumOfTwo(1,2))