# Enter your code here. Read input from STDIN. Print output to STDOUT

t=int(input())

Ar=[]
while t!=0:
    l=list(map(str,input().split()))
    #print(l)
    if l[0]=="1":
        if Ar==[]:
            Ar.append(l[1])
        else:

            Ar.append(Ar[-1]+l[1])
    if l[0]=="2":
        
        val=list(Ar[-1])
        val=val[:len(val)-int(l[1])]
            
        Ar.append("".join(val))
    if l[0]=="3":
        print(Ar[-1][int(l[1])-1])
    
    if l[0]=="4":
        Ar.pop(len(Ar)-1)

            
    #print(Ar)

    t=t-1
