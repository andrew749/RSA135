e=29
n=65
c=41
for i in range(0,65):
    result=(i**e-c)%n
    if(not result):
        print (i)
