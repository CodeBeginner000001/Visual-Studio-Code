def a():
    print("Good Morning")


def b(x):
    print("Good Morning,",x)
#b(500)  # OUTPUT : Good Morning, 500
#b("Denver")   # OUTPUT : Good Morning, Skill_Void


def c(g,age):
    print("My name is",g,"of age :",age)
#c("ashu",21)   # OUTPUT : My name is ashu of age : 21


def b(x,y):
    if x=='B.tech' and y=='python':
        print("You can learn DSA")
    elif x=='C.A' and y=='python':
        print("Great,You can learn DSA")
    elif x=='M.tech' and y=='python':
        print("Good job,You can do DSA")
    else:
        print("You need time to learn DSA")
#print("Enter the course and degree below to find wheather you can do DSA or Not")
#a=input("Enter the degree you have done:")
#c=input("Enter the course you have done:")
#b(a,c)



def myfun(args):
    print(type(args))
    print(args)
    for arg in args:
        print(arg)
#myfun('Hello','good','fgf')

# Will show ERROR:
#Traceback (most recent call last):
  #File "c:\Users\ashu2\Desktop\VS CODE\python\Python\function.py", line 37, in <module>
    #myfun('Hello','good','fgf')
#TypeError: myfun() takes 1 positional argument but 3 were given

def myfun(args):
    print(type(args))
    print(args)
    for arg in args:
        print(arg)
#myfun('Hello')

# OUTPUT WIll be :
#<class 'str'>
#Hello
#H
#e
#l
#l
#o


def myfun(*args):
    print(type(args))
    print(*args)
    for arg in args:
        print(arg)
#myfun('Hello','good','fgf')

# OUTPUT will be :
#<class 'tuple'>
#Hello good fgf
#Hello
#good
#fgf

def funn(**kwargs):
    print(kwargs)
    print(type(kwargs))
    for key, value in kwargs.items():
        print(f"key : {key}------value: {value}")
#funn(do='sheep',mid='learning',last='DL')

