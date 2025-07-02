import example
print(example.add(4,5))
print(dir(example))     # list down all the available module members

import example as ex
print(ex.add(6,7))

from example import add
print(add(5,6))
#this create error
# print(multiply(3,4)) 

from example import *
print(add(5,0))
print(multiply(5,43))