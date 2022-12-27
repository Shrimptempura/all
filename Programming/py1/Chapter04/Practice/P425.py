s1 = 'Kang Young Min'

s1 = s1.replace(' ', '')
s1 = s1.upper()

cnt = 0

for i in range(len(s1)):
    if s1[i] == 'N':
        cnt += 1
        
print(s1, '{}개의 N이 나타남'.format(cnt))