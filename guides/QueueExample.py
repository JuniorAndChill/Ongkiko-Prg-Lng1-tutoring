# pro-tip: when naming your files, try to not just call it something that matches a imported library.
# hence me having to rename this to QueueExample instead of just queue. It causes a faulty loop

# anyway, queue is a function that is "First in, First out" (FIFO), just like an actual line. This is the 
# typical use for queue in python. You use it when you need to create a line. 
# Another real world example is when you are assigning program running order similar to how operating systems do.
import queue

q = queue.Queue(256) #this will call out 

q.put("apple") # "put" is similar to append, this allows you to add to your list
q.put("orange")
q.put("banana")
print(f"\033[92m**We put 3 items into the queue**\033[0;37;40m\n")


print(f"This is the current queue: \n{q.queue}")
print(f"\033[92m**As we saw in other prints, it'll show the brackets this way and tells you it's dequeing**\033[0;37;40m\n")

for fruit in list(q.queue):
    print(fruit, end = " ")
# since lists are indexed (assigned to a specific spot/coordinate), it won't get reordered
# alpha-numerically like sets would. Also with that logic you wouldn't use queue functions in sets
print(f"\n\033[92m**Notice how the 'for' loop drops the brackets**\033[0;37;40m\n")

q.put("orange")
print(f"Size of queue is: {q.qsize()}")
print(f"\033[92m**An option for showing queue size. Always something to be mindful of**\033[0;37;40m\n")

print(f"\033[92m**Taking someone out of the queue is simple**\033[0;37;40m\n")

q.get()# since this is a queue, when you "get()" the next person is directly taken them
       # off the line so they no longer show up in the next print

for fruit in list(q.queue):
    print(fruit, end = " ")
print(f"\n\033[92m**When we 'get()', it grabs the 1st element**\033[0;37;40m\n")
q.put("kiwi") # Now we add 'kiwi' to the end of the line

for fruit in list(q.queue):
    print(fruit, end = " ")
print(f"\n\033[92m**We can simply add someone with 'put()' into the queue**\033[0;37;40m\n")

q.get("banana") # See even when you call something it'll just grab the next in queue

for fruit in list(q.queue):
    print(fruit, end = " ")
print(f"\n\033[92m**When 'get('banana')' it didn't care and still took 'orange' because of how the queue module works**\033[0;37;40m\n")