def circle_area_circum(radius):
    circum = 3.14 * 2 * radius
    area = 3.14 * radius * radius
    return circum, area

circum, area = circle_area_circum(10)

print('반지름이 {}인 원의 면적은 {}, 원의 둘레는 {:.2f}입니다.'.format(10, area, circum))
    