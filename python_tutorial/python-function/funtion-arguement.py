# default arguement
def sum(a =  7 , b =  10):
    sum =  a+ b
    return sum

print("The sum of the 2 and 8=\t",sum(2,8))
print("The sum of the 9 and 10=\t",sum(9))
print("The sum of7 and 10 =\t",sum())


# Python keyword arguement

def printName(firstName , lastName):
    print(firstName , lastName)
    return

printName(lastName="Tiwari", firstName="Pradeep")



# arbitary arguemnt

def multiplication(*num):
    result = 1
    for value in num:
        result *= value
    print(type(result))
    return result

print(multiplication(2,3,[4,5]))          #  6 * [4,5] = 6 timee 4,5        
print(multiplication(1,2,3))