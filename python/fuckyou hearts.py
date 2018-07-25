n=int(input("enter the number:"))
m=int(n/2)

for i in range(m-1):
    for j in range((m-2)-i,0,-1):
        print("  ",end="")
    for k in range(4+2*i):
        print("*",end=" ")
    for l in range((m-2)*2-2*i):
        print("  ",end="")
    for o in range(4+2*i):
        print("*",end=" ")
    print("")
    
for i in range(n,0,-1):
    for j in range(n-i,0,-1):
        print(" ",end=" ")
    for j in range(2*i):
        print("*",end=" ")
    print(" ")
    if i==1:
        for k in range(2*n-1):
            print(" ",end="")
        print("*")    




