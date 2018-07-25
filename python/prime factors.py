print("Enter the number whose prime factors are to be found ")
n=int(input())
c=0
primefactors=[]
for i in range(2,n):
    if n%i==0:
       for j in range(2,i):
           if i%j==0:
               c+=1
       if c==0:
           primefactors.append(i)
       c=0    
primefactors.sort(reverse=True)
print("Largest prime factor is: ",primefactors[0])           
           
