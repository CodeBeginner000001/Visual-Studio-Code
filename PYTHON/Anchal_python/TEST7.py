def circle(r): 
 return 3.14*r*r 
def square(a): 
 return a*a 
def ractangle(l,b): 
 return l*b 
while 1: 
  print("="*40) 
  print("********Main Menu*******") 
  print("1 for calculate Area of circle [A=πr2]")
  print("2 for calculate Area of square [A=a*a]")
  print("3 for calculate Area of rectangle [A=l*b]") 
  print("="*40) 
  n=int(input("Enter your Choice(1,2,3): ")) 
  if n==1: 
    r=float(input("Enter the radius: ")) 
    area=circle(r) 
    print("Area of Circle:=",area) 
  elif n==2: 
    s=float(input("Enter the side length: ")) 
    area=square(s) 
    print("Area of square:=",area) 
  elif n==3: 
    l=float(input("Enter the value of l: ")) 
    b=float(input("Enter the value of b: ")) 
    area=ractangle(l,b) 
    print("Area of ractangle:=",area) 
  else: 
   print("Your choice is Wrong") 
  ch=input("Y/N : ") 
  if ch=='n' or ch=='N':
   break
