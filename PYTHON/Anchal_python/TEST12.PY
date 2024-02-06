f = open("E.txt") 
v,c,u,l,o=0,0,0,0,0 
data = f.read() 
vowels=['a','e','i','o','u'] 
for ch in data: 
 if ch.isalpha(): 
   if ch.lower() in vowels: 
     v+=1 
   else: 
     c+=1 
 if ch.isupper(): 
   u+=1 
 elif ch.islower(): 
   l+=1 
 elif ch!=' ' and ch!='\n': 
   o+=1 
   print("Total Vowels in file:",v) 
   print("Total Consonants in file n :",c) 
   print("Total Capital letters in file :",u) 
   print("Total Small letters in file :",l) 
   print("Total Other than letters :",o) 
   f.close() 
