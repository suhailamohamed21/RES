import math

class circle:
    def __init__(self, radius):
        self.radius = radius

    def area(self):
        return self.radius * self.radius * math.pi

    def perimeter(self):
        return 2 * self.radius * math.pi

radius = int(input("Enter the radius: "))
c = circle(radius)
print("Area of circle =", c.area(), "\n", "Perimeter of circle =", c.perimeter())