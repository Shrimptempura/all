a = [2, 3, 4, 5, 6]
rev_a = []
cnt = len(a)

for i in range(cnt):
    rev_a.append(a.pop())

print(rev_a)