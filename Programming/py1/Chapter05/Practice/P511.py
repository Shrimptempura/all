n = input('n을 입력하시오 : ')

list1 = list(map(int, input('{}개의 수를 입력하세요 : '.format(n)).split()))
print('합 : {}'.format(sum(list1)))
print('평균 : {:.2f}'.format(sum(list1) / len(list1)))
print('최대값 : {}'.format(max(list1)))
print('최솟값 : {}'.format(min(list1)))