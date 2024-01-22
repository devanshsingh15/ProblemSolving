def convert24(str1):

    if str1[-2:] == "AM" and str1[:2] == "12":
        return ("00" + str1[2:-2])
# remove the AM
    elif str1[-2:] == "AM":
        return str1[:-2]
# Checking if last two elements of time is PM and first two elements are 12
    elif str1[-2:] == "PM" and str1[:2] == "12":
        return str1[:-2]
    else:
# add 12 to hours and remove PM
        return str(int(str1[:2]) + 12) + str1[2:8]
# Driver Code
print(convert24("12:05:45 AM"))


'''def square(x):
    print (x*x)
print(square(4))
square(5)'''

'''sqr=lambda x:x*x
print(sqr(2))

mul=lambda x,y:x*y;
print(mul(2,3))'''



'''def toh(n,s,d,m):
    if n==1:
        print("move disk 1 from rod",s,"to rod",d)
        return
    toh(n-1,s,m,d)
    print("move disk",n,"from rod",s,"to rod",d)
    toh(n-1,m,d,s)
toh(3,'A','C','B')'''



#fibonacci(normal)
'''n=int(input("enter the number of terms"))
x1=0
x2=1
c=2
if n<=0:
    print("enter positive number")
elif n==1:
    print("fibonacci sequence is: ")
    print(x1)
else:
    print("fibonacci sequence is: ")
    print(x1)
    print(x2)
    while c<n:
        x=x1+x2
        print(x)
        x1=x2
        x2=x
        c+=1'''


#fibonacci using recursion        
'''def fib(n):
    if n<=1:
        return n
    else:
        return fib(n-1)+fib(n-2)
n=int(input("enter no. of terms"))
if n<0:
    print("enter positive number")
else:
    for i in range(n):
        print(fib(i))'''


'''def linsearch(a,n,x):
    for i in range(n):
        if a[i]==x:
            return i
    
a=[1,2,3,4,5]
x=int(input("enter no."))
n=len(a)
print(x,"is present  at index",linsearch(a,n,x))'''
      


    
