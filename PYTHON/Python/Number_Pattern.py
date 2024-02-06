n=int(input("Enter the number till you want to see the pattern:"))
for i in range (1,n+2):
    for j in range(1,i):
        print(j,end=" ")
    print("\n")     