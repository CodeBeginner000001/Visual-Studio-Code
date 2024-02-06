a=["a","b","f","r","d","g"]
a.append(["b","n","k",["l","s","p"]]) 
print(a) # OUTPUT : ['a', 'b', 'f', 'r', 'd', 'g', ['b', 'n', 'k', ['l', 's', 'p']]]


print(a[0])  # OUTPUT : a
print(a[-1])   # OUTPUT : ['b', 'n', 'k', ['l', 's', 'p']]
print(a[-1][-1])   # OUTPUT : ['l', 's', 'p']
print(a[-1][-1][0]) # OUTPUT : l
print(a[-1][-1][-1])   # OUTPUT : p



# changing value in a list  
a[-1][-1][-1]=89
print(a[-1][-1][-1]) # OUTPUT : 89
print(a) # OUTPUT : ['a', 'b', 'f', 'r', 'd', 'g', ['b', 'n', 'k', ['l', 's', 89]]]



# reversing the order of the entered list
h=["a","b","g","j","c","x"]
h.reverse()
print(h)  # OUTPUT : ['x', 'c', 'j', 'g', 'b', 'a']




# sorting will arrange nummber in ascending order whereas alphabets will be arranged in alphabetical order
h.sort()
print(h)  # OUTPUT : ['a', 'b', 'c', 'g', 'j', 'x']

v=[5,8,7,2,10,45,1,0]
v.sort()
print(v) # OUTPUT : [0, 1, 2, 5, 7, 8, 10, 45]

v.sort(reverse=True)
print(v)  # OUTPUT : [45, 10, 8, 7, 5, 2, 1, 0]

v.sort(reverse= False)
print(v) # OUTPUT : [0, 1, 2, 5, 7, 8, 10, 45]





# Nested list

L1=[0,1,2]
L2=[8,6,4]
L3=[9,7,3]
Max=[L1,L2,L3]
print(Max)       # OUTPUT : [[0, 1, 2], [8, 6, 4], [9, 7, 3]]
print(Max[0])     # OUTPUT : [0, 1, 2]
print(Max[0][2]) # OUTPUT : 2