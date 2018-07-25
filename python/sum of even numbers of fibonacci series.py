s=0
a=1
b=2
for i in range(100):
    
    c=a+b
    if c%2==0 :
        if s<4000000 :
            s+=c
        else:
            break
        
    a=b
    b=c
print(s)    
