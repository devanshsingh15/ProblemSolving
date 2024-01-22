"""import re
string="ABES Engineering College"
ma=re.search("AB",string)
print(ma)
if(ma):

    print("Search Successful")
else:
    print("Search Unsuccessful")


import re
string="String Sample Test"
ma=re.match("Test",string)
print(ma)
if(ma):
    print("Search Successful")
else:
    print("Search Unsuccessful")


import re
string="Test String sample"
ma=re.match("Test",string)
print(ma)
if(ma):
    print("Search Successful")
else:
    print("Search Unsuccessful")


import re
string="Test String sample Test"
ma=re.findall("Test",string)
print(ma)
if(ma):
    print("Search Unsuccessful")
else:
    print("Search Unsuccessful")"""

n=int(input("Enter the number: "))
c=0
a=1
b=1
if n==0 or n==1:
    print("Yes")
else:
    while c<n:
        c=a+b
        b=a
        a=c
    if c==n:
        print("Yes")
    else:
        print("No")
