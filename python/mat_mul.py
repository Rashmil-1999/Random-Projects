print("enter the size of the matrix A:m X n")
m,n = int(input("m=")),int(input("n="))

Fill_Matrix(r,c)
print("enter the number of elements:")
A=[][]
for i in range(m):
    for j in range(n):
        A[i][j]=input("element number "+str(3*i+j+1)+ " :")
