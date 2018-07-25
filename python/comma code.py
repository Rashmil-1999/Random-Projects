spam=['apples','bananas','tofu','cats']
eggs=['d','f','g','h','w']
ban=['q','w','e','r','t','y','u']
def commacode(list):
    m=''
    for i in range(0,len(list)):
        if i!=(len(list)-1):
            m+=list[i]+', '
        else:
            m+=' and '+list[i]
    print(m)    
commacode(list(input()))    
            
