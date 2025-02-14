import random
print(random.random())
print(random.randrange(23,30))


# selecting a random value in list
list1 = ['ram' , 'seeta' , 'lakshman' , 'bharat' , 'shatrughan']
print(random.choice(list1))

random.shuffle(list1)
print(list1)