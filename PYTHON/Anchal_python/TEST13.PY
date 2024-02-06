import pickle 
student=[] 
f=open('student.dat','wb') 
ans='y' 
while ans.lower()=='y': 
 roll = int(input("Enter Roll Number :")) 
 name = input("Enter Name :") 
 student.append([roll,name]) 
 ans=input("Add More ?(Y)") 
pickle.dump(student,f) 
f.close() 
f=open('student.dat','rb') 
student=[] 
while True: 
  try: 
   student = pickle.load(f) 
  except EOFError: 
   break 
ans='y' 
while ans.lower()=='y': 
 found=False 
 r = int(input("Enter Roll number to search :"))
 for s in student: 
   if s[0]==r: 
    print("## Name is :",s[1], " ##") 
    found=True 
    break 
   if not found: 
    print("####Sorry! Roll number not found ####") 
    ans=input("Search more ?(Y) :") 
f.close()