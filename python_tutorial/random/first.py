import random
# the random module rely on psedu random generator random() generator which generates the float value 0 to 1
print(random.random())

# gernerating random value from your list, tuuple etc. Using choice() mehtod
print(random.choice([1,2,3,10,12]))
print(random.choice("Ram"))

# Using randRange which takes three parameter (0, 6, 2) :- 0,2,4,
print(random.randrange(0,6,3))

# the shuffle method
l = [1,2,3,4,5]
random.shuffle(l)
print(l)
random.shuffle(l)
print(l)


# there are may lot of methods like seed , uniform.
