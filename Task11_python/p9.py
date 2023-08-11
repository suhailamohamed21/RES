import math
class shape:
    def __init__(self, side1, side2, angle):
        self.side1 = side1
        self.side2 = side2
        self.angle = math.radians(angle)

    def area(self):
        return self.side1 * self.side2 * math.sin(self.angle)


side1 = float(input("Enter the first side: "))
side2 = float(input("Enter the second side: "))
angle = float(input("Enter the angle between them: "))

parallelogram = shape(side1, side2, angle)
print("Area of parallelogram =", parallelogram.area)
 