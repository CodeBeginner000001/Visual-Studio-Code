f = open("A.txt") 
for line in f: 
 words = line.split() 
 for w in words: 
  print(w+'#',end='') 
  print() 
f.close() 