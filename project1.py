#factorial of a number
num=int(input("Enter  Number:"))
fact=1
if num==0:
    print("Factorial of",num,"is",fact)
for i in range(1,num+1):
    fact=fact*i
print("Factorial of ",num,"is",fact)    

    
