# Lists are a special container for data. It can take various types
# of data in them. There are 4-built-in data types in Python; "list",
# "tuple","set", and "dictionary", they all have different usages.
# While lists are similar to the other data types they use "[]" to 
# indicate the data type. "()" & "{}" are reserved for other types
grades = [100, 90, 80, 70, 60]
ratings = [99.8, 88.7, 77.6, 66.5]
materials = ["wood", "paint", 95, 12.75]

print(f"Here is the grades printout using 'f' function: {grades}")
print(f"When you don't use a 'for' loop it will show the '[]' on your print\n")
for grade in grades:
    print(grade, end = " ")
print("\nThe 'for' loop removes the brackets\n")
print(f"Here is the ratings printout using 'f' function: {ratings}")
for x in ratings:
    print(x, end = " ")
print("\n")
print(f"Here is the materials printout using 'f' function: {materials}")
for mat in materials:
    print(mat, end = " ")
print("\n")

# display top 3 grades

print(f"You can also do this inline using 'f' function: {grades[0:3]}")
# using "[]" and an "index" range you can print out extactly the items out
# of the container that you indicate. doing negative integers changes the direction
print(f"You can also show the lowest grades using 'f' function: {grades[:1:-1]}\n")

# When doing a inverted count you change the range function by putting an extra ':'
# at the front of the 1st number and typically showing the end point in negative
# i.e. [0:3] means start at the element in '0' and go until you get to element
# before '3'.

# when doing he count from the other end I write it [:1:-1] which means we start
# at the last element ' ' and go by -1 at a time till we hit the element before '1'
# this would change based on how many elements are in the list of course

for grade in grades[0:3]:
    print(grade, end = " ")
print("\n")

for grade in grades[:1:-1]:
    print(grade, end = " ")
print("\n")