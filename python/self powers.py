s=0
def num_extract(sum_):
    return sum_%10000000000
for i in range(1,1001):
    s+=i**i
print("last 5 digits of "+str(s)+ "are "+str(num_extract(s)))    
    
