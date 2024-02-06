f=open('s1','w+b')
n=int(input('Enter number of students:'))
for i in range(n):
    name=input('Enter name of student:')
    rollno=input('Enter rollno:')
    marks=input('Enter marks:')
    bname=bytes(name,encoding='utf-8')
    brollno=bytes(rollno,encoding='utf-8')
    bmarks=bytes(marks,encoding='utf-8')
    f.write(brollno)
    f.write(bname)
    f.write(bmarks)
    f.write(b'\n')

f.seek(0)
data=f.read()
f.seek(0)
sk=input('Enter the roll no whose marks need updatation :')
bsk=bytes(sk,encoding='utf-8')
l=len(bsk)
loc=data.find(bsk)
if loc<0:
    print('Details not present')
else:
    f.seek(loc+l,0)
    i=0
    while f.read(1).isalpha():
        i=i+1
    f.seek(-1,1)
    marksu=input('Enter updated marks:')
    bmarksu=bytes(marksu,encoding='utf-8')
    f.write(bmarksu)
    print("Entire content of file after updation is :\n")
    f.seek(0)
    udata=f.read()
    print(udata.decode())