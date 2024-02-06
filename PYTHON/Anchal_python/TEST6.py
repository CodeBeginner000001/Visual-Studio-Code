result = 0 
val1 = float(input("Enter the first value :")) 
val2 = float(input("Enter the second value :")) 
op = input("Enter any one of the operator (+,-,*,/,//,%)") 
if op == "+": 
 result = val1 + val2 
elif op == "-": 
 result = val1 - val2 
elif op == "*": 
 result = val1 * val2 
elif op == "/": 
 if val2 == 0: 
    print("Please enter a value other than 0") 
 else: 
    result = val1 / val2 
elif op == "//": 
    result = val1 // val2 
else: 
    result = val1 % val2 
print("The result is :",result) 
