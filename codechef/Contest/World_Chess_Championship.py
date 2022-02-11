t=int(input())
for i in range (t):
    x=int(input())
    s=input()
    l=len(s)
    c1=0
    c2=0
    c3=0
    for i in range(0,l):
        if s[i]=='C':
            c1+=1
        elif s[i]=='N':
            c2+=1
        elif s[i]=='D':
            c3+=1
    
    if c1>c2:
        print(60*x)
    elif c1==c2:
        print(55*x)
    elif c1<c2:
        print(40*x)

        