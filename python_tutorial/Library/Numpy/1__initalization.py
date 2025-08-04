import numpy as np

x = np.array([1,2,3,4,14])  # Creating numpy array using list
x
print(x)
print(x[0])

# mutable
x[0] = 112
print(x)

#slicing
print(x[0 : 4 : 2])

#attribute of ndarray
print(x.ndim)
print(x.shape)
print(x.size)
print(x.dtype)
