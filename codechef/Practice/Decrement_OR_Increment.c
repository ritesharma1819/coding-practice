// problem link=https://www.codechef.com/problems/DECINC

// problem statement
// Decrement OR Increment 
// Write a program to obtain a number N and increment its value by 1 if the number is divisible by 4 otherwise decrement its value by 1.

// Input:
// First line will contain a number N.
// Output:
// Output a single line, the new value of the number.

// Constraints
// 0≤N≤1000
// Sample Input:
// 5
// Sample Output:
// 4



#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if (n%4==0)
    {
       printf("%d",n+1);
    }
    else
    printf("%d",n-1);
    
    
}