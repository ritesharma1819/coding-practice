// problem link=https://www.codechef.com/problems/FLOW002

// problem statement
// Find Remainder 
// Write a program to find the remainder when an integer A is divided by an integer B.

// Input
// The first line contains an integer T, the total number of test cases. Then T lines follow, each line contains two Integers A and B.

// Output
// For each test case, find the remainder when A is divided by B, and display it in a new line.

// Constraints
// 1 ≤ T ≤ 1000
// 1 ≤ A,B ≤ 10000
// Example
// Input
// 3 
// 1 2
// 100 200
// 40 15

// Output
// 1
// 100
// 10



#include<stdio.h>
int main()
{
    int n,c;
    scanf("%d",&n);
    for (int i = 1; i<=n; i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        c=a%b;
        printf("%d\n",c);
    }
    
}