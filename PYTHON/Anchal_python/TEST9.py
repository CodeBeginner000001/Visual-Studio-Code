fin=open("b.txt",'r') 
str=fin.read() 
L=str.split() 
count_words=0 
print("Content of file:-",str) 
for i in L: 
 count_words=count_words+1 
print("Total no.of Words:",count_words)