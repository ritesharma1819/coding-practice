t=int(input())
for i in range (t):
    x=int(input()) 
    s=input() #taking string as a input
    l=len(s)  #here calculating length of string
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
    
    if c1>c2:  # condition for when carlsen won the match
        print(60*x)
    elif c1==c2: #condition for when match gone to be tie
        print(55*x)
    elif c1<c2:   #here condition when carlsen loos the match
        print(40*x)

        