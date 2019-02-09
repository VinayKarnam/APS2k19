

t=int(input())

for i in range(t):
    n=int(input())
    a=set(input())
    for j in range(n-1):
        str2=set(input())
        a=a&str2
    print(len(a))
