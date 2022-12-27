animals = ['dog', 'cat', 'tiger', 'lion']

lioned = animals.pop(0)
animals.append(lioned)

print(animals)

for i in animals:
    print('I love {}'.format(i))