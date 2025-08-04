import numpy as np

# array with zeroes
x1 = np.zeros(5)
print(x1)

# array with ones
x2 = np.ones(3)
print(x2)

# empty array with garabage value
x3 = np.empty(4)
print(x3)

# array with range of elements
x4 = np.arange(2,10,2)
print(x4)

x5 = np.arange(8) # size of array is 8, elemnts starts from 0
print(x5)


# array with random elements
x5 = np.random.random(5)
print(x5)
x6 = np.random.random((2,3)) # shape parameter
print(x6)

# 5 values  Evenly space 0 to 1
x6 = np.linspace(0 , 1, 5)
print(x6)


# 3 * 3 Identity matrix
x7 = np.eye(3)
print(x7)