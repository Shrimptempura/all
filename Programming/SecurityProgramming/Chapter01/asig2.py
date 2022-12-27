inputStr = input("입력문자 : ")
inputStrSplit = inputStr.replace("of", "").split()
print(inputStrSplit)

acronymStr = []
for x in inputStrSplit:
    acronymStr += x[0].upper()
print(acronymStr)
print("".join(acronymStr))

print("".join([x[0].upper() for x in input("입력문자 : ").replace("of", "").split()]))