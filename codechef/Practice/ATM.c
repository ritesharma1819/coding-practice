#include<stdio.h>
int main()
{
    int a;
    float b,w;
    scanf("%d",&a);
    scanf("%f",&b);
    if (a%5==0)
    {
    w=b-(float)a-0.50;
        if (w<0)
        {
           printf("%.2f",b);
        }
        else
         printf("%.2f",w);
        
    }
    else
     printf("%.2f",b);
    
}