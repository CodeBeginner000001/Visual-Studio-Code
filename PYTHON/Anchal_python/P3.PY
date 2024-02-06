R={"OM":76, "JAI":45, "BOB":89, 
"ALI":65, "ANU":90, "TOM":82}
def PUSH(S,N):
 S.append(N)
def POP(S):
 if S!=[]:
    return S.pop()
 else:
    return None
ST=[]
for k in R:
 if R[k]>=75:
    PUSH(ST,k)
while True:
 if ST!=[]:
    print(POP(ST),end=" ")
 else:
    break
