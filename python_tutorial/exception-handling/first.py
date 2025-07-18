def Div(a, b):
    try:
        print(a/b)
    except:
        print("Deominatior can not be 0.")

if __name__ == '__main__':
    a = int(input("First number"))
    b = int(input("Second number"))
    Div(a,b)

