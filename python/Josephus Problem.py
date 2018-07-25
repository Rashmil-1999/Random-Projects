#! python3
while True:
    N = input(" Enter the number of people standing in a circle: \n OR\n type Quit to quit the program:")
    if N.lower() == 'quit':
        break
    else:
        N=int(N)
        people = list(range(1,int(N+1)))
        i = 0
        while len(people)>1:
            if i == (len(people)-1):
                del people[0]
                i = 0
            elif i == (len(people)-2):
                del people[i+1]
                i = 0
            else:
                del people[i+1]
                i+=1
        print("the last man standing is "+str(people[0]))       
            

    

    
