#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int x;
        scanf("%d",&x);
        char s[14];   // taking string as input  with size 14
        scanf("%s",&s);
        int c1=0,c2=0,c3=0; 
        for (int i = 0; i <14 ; i++)
        {
        //    scanf("%s",&s[i]);
            if(s[i]=='C')
            {
                c1=c1+1;
            }
            else if (s[i]=='N')
            {
                c2=c2+1;
            }
            else if (s[i]=='D')
            {
                c3=c3+1;
            }
        }
        if (c1<c2)  //condition for carlsen won
        {
            printf("%d\n",60*x);
        }
        else if (c1==c2)    //condition for when match gone to be tie
        {
            printf("%d\n",55*x);
        }
        else if (c1>c2)  //condition for when carlsen going to be loos the match
        {
            printf("%d\n",40*x);
        }
        
    }
    
}