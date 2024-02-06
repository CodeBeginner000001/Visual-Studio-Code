f1 = open("c.txt") 
f2 = open("dcopy c.txt","w") 
for line in f1: 
  if 'b' not in line: 
    f2.write(line) 
    print("## File Copied Successfully! ##") 
f1.close()
f2.close()
