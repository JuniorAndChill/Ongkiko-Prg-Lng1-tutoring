#There are 2 types of Constructors, 'Default' and 'Parameterized'. Default takes no
#arguements(initializes with default attribute values) while parameterized 
#(initilizes with specific values)accepts arguements. These are special methods called
#automatically when an object is created from a class. 


#Since there was no example of __new__ method, I'll drop an example below.
class ClassName:
    def __new__(cls, [parameters]):#__new__ allocates memory & returns the object
        instance = super(ClassName, cls).__new__(cls)#cls=class that needs initilize
                  #^^^^^super is the designator for parent class or 'superclass'
                  #this is important. It enables method overriding and inheritance for
                  #the child classes. Gives modularity (very much OO) & dynamic function
        
        return instance #because you just created a new object you need to make it
                        #available by returning it then call it in __init__

#this is an example of the __init__ method. It takes a newly created instance and 
#immediately calls the new object while initializing attributes for the instance
#(__init__ = initialize)
class Student:
    def __init__(self, nm, mjr, yr = 2024):#example of parameterized constructor
        self.Name = nm
        self.Major = mjr
        self.year = yr
        
#the child object grabs the parameters from the parent and assigns values on creation        
student1 = Student("Maria Cruz", "Cyber", 2021)

#when you print you call it by the child object name instead of the parent class
print(student1.Name, student1.Major, student1.year)

student2 = Student("Mike Jones", "CIS")

print(student2.Name, student2.Major, student2.year)