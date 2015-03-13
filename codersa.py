message=5
e=17
n=77
for i in range(0,77):
    result=(message**e-i)%77
    if(not result):
        print(i)
