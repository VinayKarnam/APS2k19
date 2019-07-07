
import math

t=int(input())
for i in range(t):
    d=[]
    s=input()
    d=s.split()
    n=int(d[0])
    k=int(d[1])
    l=[]
    s=input()
    l=s.split()
    l=list(map(int,l))
    count=0
    for x in range(len(l)):
        sub=[]
        for y in range(x,len(l)):
            sub.append(l[y])
            
            m=math.ceil(k/(y-x+1))
            #print(sub,'#',m,x,y)
            sub=sorted(sub)
            ind=math.ceil(k/m)
            ind=ind-1
            xx=sub[ind]
            f=sub.count(xx)
            if f in sub:
                count=count+1
    print(count)

