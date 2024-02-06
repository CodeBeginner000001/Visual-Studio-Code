var=True  
while var: 
 choice=int(input("Press-1 to find the ordinal value of a character \nPress-2 to find a charact1er of a value\n")) 
 if choice==1: 
   ch=input("Enter a character : ") 
   print(ord(ch)) 
 elif choice==2: 
   val=int(input("Enter an integer value: "))
   print(chr(val)) 
 else: 
   print("You entered wrong choice") 
   print("Do you want to continue? Y/N") 
option=input() 
if option=='y' or option=='Y': 
  var=True 
else: 
  var=False 
