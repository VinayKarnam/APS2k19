import random
import sys
list=[]
list2=[]
x=int(sys.argv[1])
y=int(sys.argv[2])
print(x," ",y)

for i in range(x):
        for j in range (y):
                print(random.randint(0,1),end=" ")
        print("")
