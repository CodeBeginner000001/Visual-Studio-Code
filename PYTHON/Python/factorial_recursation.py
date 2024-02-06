def factorial(n):
    if n==1:
        return 1
    else:
        return n*factorial(n-1)
a=int(input("enter the number to find factorial:"))
print(factorial(a))

def f1(n):
    fact=1
    for i in range(n):
        fact=(fact*(i+1))
        print("factorial of",i+1,"=",fact)
b=int(input("enter the number till where you want to find the factorial:"))
f1(b)
        

