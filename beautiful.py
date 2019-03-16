

t=int(input())
for i in range(t):
    l=[]
    s=input()
    l=s.split()
    n=d=0
    n=int(l[0])
    d=int(l[1])
    #print(n , ' ',d)
    sum_=0
    min_=d
    i=0
    while n>0:
        m=n%10
        n=int(n/10)
       # print(m)
        if m<=min_:
            min_=m
            sum_=float(sum_+(m*pow(10,i)))
        else:
            sum_=(sum_*10)+d
        i=i+1
    st=str(sum_)
    print(st)
            
        
