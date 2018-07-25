n=5
ref=['A','B','C','D','E']
for i in range(5):
    for j in range(n-i-1,0,-1):
        print(" ",end=" ")
    for k in range(2*i+1):
        print(ref[i-abs(i-k)],end=" ")
    print("")
    
        
    
