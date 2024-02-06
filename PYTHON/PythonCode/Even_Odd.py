Num=int(input("enter how many times you want to check if a number is even or odd:"))
b=[]
for i in range(0,Num) :
    a=int(input("Enter the number to find even or odd:"))
    if a % 2==0 :
        print(a,"is EVEN")
    else :
        print(a,"is ODD")
    b.append(a)
print(b)
    
