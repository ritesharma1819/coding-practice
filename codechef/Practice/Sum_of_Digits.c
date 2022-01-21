// problem link=https://www.codechef.com/problems/FLOW006

// problem statement
// Sum of Digits 
// You're given an integer N. Write a program to calculate the sum of all the digits of N.

// Input
// The first line contains an integer T, the total number of testcases. Then follow T lines, each line contains an integer N.

// Output
// For each test case, calculate the sum of digits of N, and display it in a new line.

// Constraints
// 1 ≤ T ≤ 1000
// 1 ≤ N ≤ 1000000
// Example
// Input
// 3 
// 12345
// 31203
// 2123
// Output
// 15
// 9
// 8

#include<stdio.h>
int main()
{
    int k,sum=0,digit;
    scanf("%d",&k);
    for (int i = 1; i <=k; i++)
    {
        int n;
        scanf("%d",&n);
        for (int i = n; i!=0; i=i/10)
        {
           digit=i%10;
           sum=sum+digit;
        }
        printf("%d\n",sum);
        sum=0;
    }
}