from pickle import TRUE


n=int(input("enter the number to find  wheather it's prime or not:"))
NP=TRUE
for i in range(2,n):
    if n%i==0:
        NP=False
        break;
if NP==TRUE:
    print(n,"is Prime Number ")
else :
    print(n,"isn't Prime Number ")