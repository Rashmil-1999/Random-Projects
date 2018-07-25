import re

pattern = str(input("enter any string:"))

if re.match(pattern,"aspamisbullshit!!!"):
	print("this prints!")
else:
	print("this doesn\'t")
if re.search(pattern,"what is "):
	print("this is the result from search whaich is true!!")
else:
	print("this is the false output of search function!!")	
print("this is the output of findall",re.findall(pattern,"spamisbullshit!!!"))	

def name_replace():
	phrase_list = ['Hi <name>','My name is <name>!','How are you doing?']
	pattern = r"<name>"

	name_Dict = {0:'David',1:'Anastasia',2:'useless'}	

	for i,phrase in enumerate(phrase_list):
		print("{}".format(re.sub(pattern,name_Dict[i],phrase)))
name_replace()		
