import csv 
with open('myfile.csv',mode='a') as csvfile: 
 mywriter = csv.writer(csvfile,delimiter=',') 
 ans='y' 
 while ans.lower()=='y': 
    eno=int(input("Enter Employee Number:- ")) 
    name=input("Enter Employee Name:- ") 
    salary=int(input("Enter Employee Salary:-")) 
    mywriter.writerow([eno,name,salary]) 
    print("## Data Saved... ##") 
    ans=input("Add More ?") 
ans='y' 
with open('myfile.csv',mode='r') as csvfile: 
  myreader = csv.reader(csvfile,delimiter=',') 
  while ans=='y': 
    found=False 
    e = int(input("Enter Employee Number to search :")) 
    for row in myreader: 
       if len(row)!=0: 
          if int(row[0])==e: 
            print("============================") 
            print("NAME :",row[1]) 
            print("SALARY :",row[2]) 
            found=True 
            break 
       if not found: 
         print("==========================") 
         print(" EMPNO NOT FOUND") 
         print("==========================") 
         ans = input("Search More ? (Y)")