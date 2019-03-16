
import math

t=int(input())
for i in range (t):
    n=int(input())
    l=[]
    d={}
    count=0
    for j in range (n):
        s=set(input())
        s=list(s)
        s=sorted(s)
        s=''.join(s)
        #print(s)
        if s in d:
            d[s]+=1
        else:
            d[s]=1
    print(d)
    l = list(d.keys())
    n=len(l)
   # print(l)
    for j in range (n):
        if(d[l[j]]-1>0):
            count=count+math.factorial(d[l[j]]-1)
        for k in range (j+1,n):
            s=set(l[j]+l[k])
            if(len(s)==5):
                count=count+(d[l[j]]*d[l[k]])
               # print(d[l[j]],d[l[k]])
    print(count)
