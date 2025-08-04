import numpy as np
v1 = np.arange(1,7,2) # vector
v2 = np.ones(3) # same size
v3 = np.ones(4) # diff size
print(v1)
print(v2)


#1.  addition
print(v1 + 1)
print(v1 +v2)
# print(v1 + v3) # gives error for not compatible size

#2. muliplication
print(3 * v1)
print(v1 * (v2 + 2))
# print(v1 * v3) # gives error for not compatible size



