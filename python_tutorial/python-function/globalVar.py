c = 10          # this is a global variable
def printC():
    print(c)     # Accessing the global variable
printC()



def modifyCByIncrement():
    c = c+ 2       # Trying to modify global variale
                    # this creates error. so the the global var come into the picture
    print(c)

# modifyC() 

def modifyCByUsingGlobal():
    global c
    print("Value of C in modifyCByUsingGlobal \t =", c)
    c = c + 2
    print("After incrementing the value of c = \t", c)

modifyCByUsingGlobal()
