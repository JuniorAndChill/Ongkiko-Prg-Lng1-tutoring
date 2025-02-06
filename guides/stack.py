# This is an example showing how a stack is used. It is a form of "Last in, First out" (LIFO)
# The application of this function set is "Copy/Paste" or "Undo/Redo" for example
stq = []

stq.append("Maria") # appending = adding to a set/list/tuple
stq.append("John")

# "f" at the start of the print allows you to call functions
# into the print statement with good formatting
print(f"-This is the stack print showing whole stack: {stq}")

# This "-1" is used to change what the stack displays by moving a unit over
print(f"-This is the stack print minus 1: {stq[-1]}")
print(f"\033[92m**Notice how it printed the last seen element**\033[0;37;40m\n")

print(f"-This is the stack print minus 2: {stq[-2]}")
print(f"\033[92m**Notice how it printed the 1st 'in' element this time**\033[0;37;40m\n")

stq.append("Xie")

print(f"-This is the stack print after adding a name using append: {stq}")
print(f"\033[92m**Notice how it added Xie to the end of the list**\033[0;37;40m\n")

# "pop()" allows you to remove an element based on position in a list
# Optional. A number specifying the position of the element
# you want to remove, default value is -1, which returns the last item
stq.pop()

print(f"-This is the stack print after using pop: {stq}")
print(f"\033[92m**Notice how it removed the last data point in the stack**\033[0;37;40m\n")

# Sidenote- I like to do multiple prints and also have it explain in the print
# what I'm doing. This helps me follow along faster in long codes. You can always
# delete excess at the end