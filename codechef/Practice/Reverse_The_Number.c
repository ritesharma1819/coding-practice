// problem link=https://www.codechef.com/problems/FLOW007

// problem statement
// Reverse The Number 
// Given an Integer N, write a program to reverse it.

// Input
// The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

// Output
// For each test case, display the reverse of the given number N, in a new line.

// Constraints
// 1 ≤ T ≤ 1000
// 1 ≤ N ≤ 1000000
// Sample Input 1 
// 4
// 12345
// 31203
// 2123
// 2300
// Sample Output 1 
// 54321
// 30213
// 3212
// 32



#include<stdio.h>
int main()
{
    int k,digit=0,rev=0;
    scanf("%d",&k);
    while (k--)
    {
        int n;
        scanf("%d",&n);
        for (int i = n; i!=0; i=i/10)
        {
            digit=i%10;
            rev=rev*10+digit;
        }
        printf("%d\n",rev);
        digit=0;
        rev=0;
    }
    
}