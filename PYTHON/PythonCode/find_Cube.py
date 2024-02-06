from pickle import TRUE


while TRUE:
    n=input("Enter number to find cube:")
    if n=='q':
        print("Exiting.....")
        break
    if not n.isdigit():
        print("Enter digit only...")
        continue
    n=int(n)
    print("cube of",n,"is",n**3)
    