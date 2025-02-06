import math
class Cube:
    #complete class definition here
    def SideVal(self, side=0):
        self.side = side

    def Volume(self):
        return self.side ** 3

    def SurfaceArea(self):
        return 6 * (self.side ** 2)

# MAIN
oCube = Cube()
oCube.side = int(input("Enter side value: "))
print("Volume:", oCube.Volume())
print("Surface Area:", oCube.SurfaceArea())