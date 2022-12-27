# areas_of_shapes.py        직사각형과 원의 면적을 구하는 함수의 구현
def func(shape, width = 1, height = 1, radius = 1):
    if (shape == 0):
        return width * height
    if shape == 1:
        return 3.14 * radius ** 2
    
print("rect area =", func(0, width = 10, height = 2))
print("circle area =", func(1, radius = 5))
