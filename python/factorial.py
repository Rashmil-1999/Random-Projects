print('Enter the number whose factorial is to be found')
n=int(input())
f=1
for i in range(n):
    f=int(f*(int(i)+1))

print('factorial of the number is: ' + str(f))    
