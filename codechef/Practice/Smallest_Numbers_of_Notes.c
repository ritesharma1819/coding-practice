// problem link=https://www.codechef.com/problems/FLOW005

// problem statement
// Smallest Numbers of Notes 
// Consider a currency system in which there are notes of six denominations, namely, Rs. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100.
// If the sum of Rs. N is input, write a program to computer smallest number of notes that will combine to give Rs. N.

// Input
// The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

// Output
// For each test case, display the smallest number of notes that will combine to give N, in a new line.

// Constraints
// 1 ≤ T ≤ 1000
// 1 ≤ N ≤ 1000000
// Example
// Input
// 3 
// 1200
// 500
// 242

// Output
// 12
// 5
// 7


#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        int count=0;
        scanf("%d",&n);
        while (n!=0)
        {
        
            if (n>=100)
            {
                n=n-100;
                count=count+1;
            }
            else if (n>=50)
            {
                n=n-50;
                count=count+1;
            }
            else if (n>=10)
            {
                n=n-10;
                count=count+1;
            }
            else if (n>=5)
            {
                n=n-5;
                count=count+1;
            }
            else if (n>=2)
            {
                n=n-2;
                count=count+1;
            }
            else if (n>=1)
            {
                n=n-1;
                count=count+1;
            }
        }
        printf("%d\n",count);
        
    }
    
}