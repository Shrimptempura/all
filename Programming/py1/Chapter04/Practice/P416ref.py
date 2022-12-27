def int_order(inputList):
    print('입력된 정수의 리스트 : {}'.format(inputList))
    n = len(inputList)
    a = []
    
    for i in range(n):
        a.append(inputList[i])
    a = sorted(a)
    
    print('정렬된 정수의 리스트:', end = ' ')
    for i in range(n):
        print(a[i], end = ' ')

    # print('정렬된 정수의 리스트 : {}'.format(sorted(inputList)))

inputStr = input('쉼표로 구분된 정수를 여러 개 입력하시오 : ')
inputList = inputStr.split(',')

int_order(inputList)