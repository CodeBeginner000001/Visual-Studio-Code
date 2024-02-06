Employee=[]
def isempty(stk):
    Top=len(stk)-1
    if Top==-1:
        return True
    else:
        return False
def PUSH(stk,e):
    stk.append(e)
    print('Element pushed')
def POP(stk):
    if isempty(stk):
        print('Stack is empty,underflow case')
    else:
        print('Deleted element is',stk.pop())
def TRAVERSE(stk):
    top=len(stk)-1
    print(stk[top],"<-TOP")
    for i in range(top-1,-1,-1):
        print(stk[i])
stk=[]
while True:
    print('******STACK OPERATIONS******')
    print('\t1. PUSH')
    print('\t2. POP')
    print('\t3. TRAVERSE')
    print('\t4. EXIT')
    ch=int(input("Enter your choice:"))
    if ch==1:
        stk=[]
        id=input("Enter EMPLOYEE ID :")
        name=input("Enter EMPLOYEE NAME:")
        stk.append(id)
        stk.append(name)
        print(stk,"pushed")
        PUSH(Employee,stk)
    if ch==2:                
        POP(Employee)
    if ch==3:
        TRAVERSE(Employee)
    elif ch==4:
        print("EXIT")
        break