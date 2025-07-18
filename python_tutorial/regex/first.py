# Regular expression is a sequence of characters that defines the search pattern.
# module re

import re 
s = "Ram123Seeta"
res = re.search('123',s)
print(res)
if res :
    print("Pattern is found.")
else :
    print("pattern is not found.")