

f = open("in.txt","r")
x=f.readline()
l = list()
while(len(x)):
    n1,n2=x.split()
    t=[int(n1),int(n2)]
    l.append(t)
    x=f.readline()
# for i in range(0,len(l)):
#     print(l[i][0]," ",l[i][1])

print(l)

# l = list()
# for i in x:
#     print(i)
#     n1,n2=i.split()
#     l.append({int(n1),int(n2)})

# for i in l:
#     print(l)
