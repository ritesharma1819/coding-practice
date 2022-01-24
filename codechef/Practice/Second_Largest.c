// problem link=https://www.codechef.com/problems/FLOW017

// problem statement
// Second Largest 
// Three numbers A, B and C are the inputs. Write a program to find second largest among them.

// Input
// The first line contains an integer T, the total number of testcases. Then T lines follow, each line contains three integers A, B and C.

// Output
// For each test case, display the second largest among A, B and C, in a new line.

// Constraints
// 1 ≤ T ≤ 1000
// 1 ≤ A,B,C ≤ 1000000
// Example
// Input
// 3 
// 120 11 400
// 10213 312 10
// 10 3 450

// Output

// 120
// 312
// 10


#include<stdio.h>
int main()
{
    int k;
    scanf("%d",&k);
    while (k--)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if (a>b && a>c)
        {
           if (b>c)
           {
              printf("%d\n",b);
           }
           else
           printf("%d\n",c);
           
        }
        if (b>a && b>c)
        {
           if (a>c)
           {
              printf("%d\n",a);
           }
           else
           printf("%d\n",c);
           
        }
        if (c>a && c>b)
        {
           if (a>b)
           {
              printf("%d\n",a);
           }
           else
           printf("%d\n",b);
           
        }
        
    
    }
    
    
    
}