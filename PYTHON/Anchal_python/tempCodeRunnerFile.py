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