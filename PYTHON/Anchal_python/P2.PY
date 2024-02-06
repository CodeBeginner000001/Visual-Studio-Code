N=[12, 13, 34, 56, 21, 79, 98, 22, 
35, 38]
def PUSH(S,N):
     S.append(N)
def POP(S):
 if S!=[]:
    return S.pop()
 else:
    return None
ST=[]
for k in N:
 if k%2==0:
    PUSH(ST,k)
while True:
 if ST!=[]:
    print(POP(ST),end=" ")
 else:
    break