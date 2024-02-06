print("Learning %s is a Simple language" %'Python')

print("Learning %s is a %s language"%('python','Simple'))

a,b='python','Simple'
print("Learning %s is a %s language"%(a,b))

print("Learning %s is a Simple Language"%'Python')

print("Learning %r is a Simple Language"%'Python')

print("Learning %s is a Simple Language"%'this \tPython')

print("Learning %r is a Simple Language"%'this \tPython')

print('{0:8} | {1:9}'.format('Fruit','Quantity'))
print('{0:8} | {1:9}'.format('Apple',3.))
print('{0:8} | {1:9}'.format('Orange',10))

print('{0:<8} | {1:^8} | {2:>8}'.format('Left','Center','Right'))
print('{0:<8} | {1:^8} | {2:>8}'.format(22,33,55))

print('{0:=<8} | {1:-^8} | {2:.>8}'.format('Left','Center','Right'))
print('{0:=<8} | {1:-^8} | {2:.>8}'.format(22,33,55))