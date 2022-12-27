keys = ['Apple', 'Kiwi', 'Cherry', 'Banana']
values = [keys[0][0:2], keys[1][0:1], keys[2][0:2], keys[3][0:2]]

def conver(keys, values):
    result = {}
    for i in range(len(values)):
        result[keys[i]] = values[i]
    return result


print(conver(keys, values))