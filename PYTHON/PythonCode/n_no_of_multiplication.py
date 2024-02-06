a=int(input("Enter the no whose multiplication to be found:"))
b=int(input("Enter the no till you what to find:"))
for i in range(0,b+1):
    print(a,"X",i,"=",a*i)   
    # OUTPUT : 
# Enter the no whose multiplication to be found:500
# Enter the no till you what to find:62
# 500 X 0 = 0
# 500 X 1 = 500
# 500 X 2 = 1000
# 500 X 3 = 1500
# 500 X 4 = 2000 .......
# 500 X 60 = 30000
# 500 X 61 = 30500