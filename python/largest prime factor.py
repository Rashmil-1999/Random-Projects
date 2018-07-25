from math import sqrt

x=int(input("enter the number"))

#determine prime or not
def isprime(n):
    for i in range(2,int(n**0.5)):
        if n%i==0:
            return False
    return True
    
max=0
primefactors=[]
for i in range(1,int(sqrt(x)+1)):
    if x%i==0:
        primefactors.extend([i,(x/i)])
        if isprime(i) and i>max :
            max=i
        if isprime(x/i) and (x/i)>max :
            max=x/i
primefactors.sort()
print("the maximum prime factor =",max)            
print("prime factors",primefactors)
