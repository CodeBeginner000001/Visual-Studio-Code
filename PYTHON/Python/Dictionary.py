Dic={'K1':1234,'K2':[0,1,2,5,9],'K3':['text1','text2','text3']}
print(Dic['K1']*2)     # OUTPUT: 2468
#print(Dic['K3'])       # OUTPUT: ['text1', 'text2', 'text3']  
print(Dic['K2'])       # OUTPUT: [0, 1, 2, 5, 9]
print(Dic['K3'][0])    # OUTPUT: text1
print(Dic['K3'][0].upper())     #OUTPUT: TEXT1
print(Dic['K3'][0:2])   # OUTPUT: ['text1', 'text2']



Dic['K1']=Dic['K1']-1234
print(Dic['K1'])        # OUTPUT: 0
Dic['K1']-=1234
print(Dic['K1'])         # OUTPUT: -1234


d={}
d['an']='cat'
print(d['an'])     # OUTPUT: cat
d['an']='dog'
print(d['an'])     # OUTPUT: dog
d['answer']='42'
d['ans']='68'
print(d)       # OUTPUT: {'an': 'dog', 'answer': '42', 'ans': '68'}


a={'k1':{'k2':{'k3':'value1'}}}
print(a['k1']['k2']['k3'])      # OUTPUT : value1
#print(a['k1']['k2'])            # OUTPUT : {'k3': 'value1'}
#print(a['k1'])                  # OUTPUT : {'k2': {'k3': 'value1'}}


v={'h1':1,'h2':2,'h3':3,'h4':5}
print(v.keys())     # OUTPUT : dict_keys(['h1', 'h2', 'h3', 'h4'])
print(v.values())   # OUTPUT : dict_values([1, 2, 3, 5])
print(v.items())     # OUTPUT : dict_items([('h1', 1), ('h2', 2), ('h3', 3), ('h4', 5)])