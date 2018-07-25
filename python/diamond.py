s=5
step=1
h=4
n=int(input())

for i in range(n):
    for j in range((n-i),1,-1):
        print("       ",end=" ")
    for k in range(2*i+1):    
        print("FUCKYOU",end=" ")
    print(" ")
    
for l in range(n-1,0,-1):
    for m in range(n-l,0,-1):
        print("       ",end=" ")
    for b in range(2*l-1):
        print("FUCKYOU",end=" ")
    print(" ")    
    
