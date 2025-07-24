# The metacharacter sequence matches a single character in the string
import re

regex  = '[0-9]'
regex2 = '[0-9][a]'
s = "Pradeep123"
s2 = "Ram1234abc"
print(re.search(regex,s))
print(re.search(regex,s2))
print(re.search(regex2, s))
print(re.search(regex2, s2))