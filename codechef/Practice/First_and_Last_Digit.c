// problem link=https://www.codechef.com/problems/FLOW004

// problem statement
// First and Last Digit 
// If Give an integer N . Write a program to obtain the sum of the first and last digits of this number.

// Input
// The first line contains an integer T, the total number of test cases. Then follow T lines, each line contains an integer N.

// Output
// For each test case, display the sum of first and last digits of N in a new line.

// Constraints
// 1 ≤ T ≤ 1000
// 1 ≤ N ≤ 1000000
// Example
// Input
// 3 
// 1234
// 124894
// 242323

// Output
// 5
// 5
// 5



#include<stdio.h>
int main()
{
    int k,digit1=0,digit2=0,sum=0;
    scanf("%d",&k);
    for (int i = 1; i <=k; i++)
    {
        int n;
        scanf("%d",&n);
        digit1=n%10;
        for (int i = n; i !=0; i=i/10)
        {
          digit2=i%10;
        }
        sum=digit1+digit2;
        printf("%d\n",sum);

        
       
        
    }
    
}