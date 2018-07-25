print("enter number of lines you want to print",end=" ")
n=int(input())
ref=['A','B','C','D','E']
for i in range(n):
    for j in range(n-i-1,0,-1):
        print(" ",end=" ")
    for k in range(2*i+1):
        print(chr(65+i-abs(i-k)),end=" ")
    print("")
    
        
    
