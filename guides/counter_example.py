from collections import Counter
# This is a module that allow you to count data types; characters, strings, integers, etc. It can be useful when doing something like
# reviewing your code or word count app. You can also use it for things like logging data.
# **Also don't worry about that \033[92m code thing. It's me changing the color to make it easy to read on the print**
str = "University of the Incarnate Word"

result = Counter(str) # This is for counting in an iterable(a sequence of data usually held in a list, set, tuple, dictionary) 
# Here we set a variable for the output of doing a conter on a string. Basically making a temporary list

print(result) #if you really wanted to you could do inline formatting using "f"
print(f"\n\033[92mHere are the results of the character counter on our string with 'f':\033[0;37;40m {result}")

print(f"\n\033[92mHere is the results using a 'for' loop. Notice how it removes the brackets like in other examples we've done before.\033[0;37;40m")
for k, v in result.items():
    print(k, ":", v, sep = " ", end = "") # You can set how the loop seperates the data. Helpful for formatting
print("\n")
fruits = ["apple", "grapes", "apple", "banana", "orange", "banana"]

# Earlier we used 'Counter' on a string and now we use it on a list. It's pretty helpful that you can use it on many data types
fruitResult = Counter(fruits)
print(f"\033[92mNow we print the fruits counter using a 'for' loop\033[0;37;40m")
for k, v in fruitResult.items():
    print(k, ": ", v, sep = "", end = " ")
    
print("\n\n\033[92mMost common letter in UIW:\033[0;37;40m", result.most_common(3))
print(f"\033[92mMost common letter in UIW using 'f' formatting:\033[0;37;40m {result.most_common(3)}")
print("\n\033[92mMost common fruit:\033[0;37;40m", fruitResult.most_common(1))
print(f"\033[92mMost common fruit using 'f' formatting:\033[0;37;40m {fruitResult.most_common(1)}\n")

# You can also list out your elements if you need it. It's a good way to handle data and check for duplicate data or check spelling/casing
counter = Counter(a=3, b=2, c=1)
elements = list(counter.elements())
print(f"\033[92mThis is the output of individual elements:\033[0;37;40m {elements}")  # Output: ['a', 'a', 'a', 'b', 'b', 'c']
print(f"\033[92mThis is the output using a 'for' loop: \033[0;37;40m")
for k, in elements:
    print(k, " |", sep = "", end = " ")

# Now we do an example using numbers and notice how you can add the values together. 
counter1 = Counter(a=3, b=2)
counter2 = Counter(a=1, b=2, c=3)
combined = counter1 + counter2 # Using 'combined' or 'difference', you can do simple math
# 'Counter' can also handle negative values
print(f"\n\n\033[92mThe result of \033[0;37;40m{counter1} + {counter2} = {combined}\n")  # Output: Counter({'a': 4, 'b': 4, 'c': 3})