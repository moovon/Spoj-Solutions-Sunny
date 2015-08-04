http://www.spoj.com/problems/BANDW/

# your code goes here
a,b=raw_input().split()
while a!="*" and b!="*":
    c=0
    f=0
    for i in range(0,len(a)):
        if a[i]!=b[i]:
            if f==0:
                c=c+1
                f=1
        else:
            f=0
    print c
    a,b=raw_input().split()
