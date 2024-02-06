def traverse(AR):
    size=len(AR)
    for i in range(size):
        print(AR[i],end = ' ')
size=int(input("enter the size of linear list to be input :"))
AR=[None] * size 
print("enter element for the linear list")
for i in range(size):
    AR[i]=int(input("elements"+ str(i)+":"))
print("traversing the list:")
traverse(AR)
