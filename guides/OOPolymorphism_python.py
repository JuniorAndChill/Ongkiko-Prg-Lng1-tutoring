import math
#Polymorphism in programming is allowing functions to have different signatures (uses)
#with the key being data types and number of arguments used.

#for example's sake I'll add an example of inbuilt polymorphic functions
#example of len() used on a string
print(len("example"))

#example of len() being used for a list
print(len([10,20,30]))
#these show that you can use len() which is a class, in various ways while not changing
#the base class but how it's used in the instance

#examples of user-defined polymorphic functions below
class Shape:
        basic_unit = 0.0

#in these classes we pass 'basic_unit' and apply it to various shapes. These are great
#examples to use because you can use inches to measure squares, circles, rectangles,
#etc. And on these various applications you can do the appropriate math to match the
#need in the particular instance.
class Square(Shape):
    def Area(self):
        return math.pow(self.basic_unit, 2)
    
class Circle(Shape):
    def Area(self):
        return math.pi * math.pow(self.basic_unit, 2)

#in this set of instances we reasign the 'basic_unit' to be called 'width' because it makes
#sense for us in use with 3d shapes
class Rectangle(Shape):
    width = 0.0
#being able to now call it 
    def Area(self):
        return self.basic_unit * self.width
    
class Sphere(Circle):
    def Area(self):
        return 4 * Circle.Area(self)
    
class Cube(Square):
    def Area(self):
        return 6 * Square.Area(self)
    
#MAIN
oshape = Shape()
oshape.basic_unit = 4.0
print(oshape.basic_unit)

osquare = Square()
osquare.basic_unit = 11.22
print("Area of square:", osquare.Area())

ocube = Cube()
ocube.basic_unit = 5.0
print("Surface Area of cube:", ocube.Area())
