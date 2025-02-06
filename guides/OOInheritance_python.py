#Inheritance allows you to create a hierachy of classes that share a set of properties
#and methods by deriving a class from another class. It provides resuability of code
#and allows us to add features without modifying it. It offers a simple understanable
#model structure and allows less dev and maint expenses. 

#Here are some examples to demonstrate inheritance
class Person:
    firstname = ""
    lastname = ""
    #the 'new' constructor
    def CombineName(self):
        return self.firstname + " " + self.lastname

class Student(Person):#inheriting values from 'Person' class
    major = ""
    #method to display 'Student's information
    def DisplayMajor(self):
        print("Major:", self.major) 
    
class Instructor(Person):#inheriting values from 'Person' class
    department = ""
    
    def DisplayDepartment(self):
        print("Department is", self.department)
        
class DeansList(Student):#inheriting values from 'Student' class which inherited
    gpa = 0.0            #values from 'Person' class made above
    
    #method allows you to get gpa when you need it for an object 
    def isHonors(self):
        return self.gpa >= 3.85
    
    def DisplayStatus(self):
        if self.isHonors():
            print("Good Job! Deans Lister")
        else:
            print("No pain, no gain")
            
#creating objects by passing values to the instance. 1st one is calling from 'Parent'
oPerson = Person()
oPerson.firstname = "Maria"
oPerson.lastname = "Cruz"
print(oPerson.CombineName())

#this one is passing from 'Student' class
oStudent = Student()
oStudent.firstname = "Apple"
oStudent.lastname = "Macintosh"
oStudent.major = "Comp Sci"
print(oStudent.CombineName())
oStudent.DisplayMajor()

#this one is passing from 'Instructor' class
oInstructor = Instructor()
oInstructor.firstname = "Rich"
oInstructor.lastname = "Kiko"
oInstructor.department = "Finance"
print(oInstructor.CombineName())
oInstructor.DisplayDepartment()

#this one is passing from 'DeansList' class
oDeanslist = DeansList()
oDeanslist.firstname = "Microsoft"
oDeanslist.lastname = "Windows"
oDeanslist.major = "Engineering"#notice how there was never a 'major' added to
oDeanslist.gpa = 3.4            #'DeansList' but it passed values thru inheritance. 
oDeanslist.DisplayStatus()
print(oDeanslist.CombineName())

#since the classes inherited values and characteristics from their parents, it allows
#you to manipluate or pick & choose the values they need to use but can use any
#avaliable values that were inherited. It makes work faster and dynamic (very OO!)