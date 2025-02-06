#The basics for OO design is to program in such a way that the programs are easily updatable and logical
#This methodology will utilize classes and methods built into the classes.
class MyClass: 
    #typically at the start of the class you set you variables. Unlike C++ you don't have to designate private
    attrNum = 0
    attrName = ""
    attrRate = 0.00
    #'def' is defining the methods. These will be functions that can be used by child classes later. They will
    #have equations/info/variables/forms/etc that get 'passed' (used through 'inheritence'). Think of it as the
    #default canvas of like a PDF form.
    def Hello(self):#'self' in python is the instance of class. Allows access to variables/attributes/methods of a class
        print("Hello Cardinals!")

    def Display(self):
        #print("My name is", self.attrName, "I am number ", self.attrNum, "My rate is", self.attrRate)
        print(f"My name is {self.attrName}.\nI am number {self.attrNum}.\nMy rate is {self.attrRate}.")
        print("++++++++++++++++++++++")

myObj = MyClass()#this is setting inheritence of a class. The child will be able to use all functions of the parent
myObj.attrName = "Maria Cruz"#[child].[method] is how you call a function without changing the parent class.
myObj.attrNum = 1 #by using classes this way you can set variable in the current child instance 
myObj.attrRate = 12.34

myObj.Hello()
myObj.Display()#since the method was [self].[variable] the 'self allows any current child to display 
               #it's information instead of the parents information

apple = MyClass()#the reason classes are good is you can use it without repeating
                 #variable creation repeatedly. Makes work faster
apple.attrName = "Microsoft Windows"
apple.attrNum = 2
apple.attrRate = 34.56
apple.Hello()
apple.Display()

honda = MyClass()
#you can also use the variables to take inputs. Typically you do this when you have loops or functions that
#are useful but maybe your starting values need to be different. So imagine you are trying to calculate velocity
#but instead of calculating it on Earth you want to calculate it on the moon. Since gravity is different, you
#would need to change the value for gravity for example to the moons. However the other info would still be the same
honda.attrName = input("Enter your name: ")
honda.attrNum = input("Enter your number: ")
honda.attrRate = input("Enter your rate: ")
print("++++++++++++++++++++++")
honda.Display()