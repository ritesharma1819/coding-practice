// problem link=https://www.codechef.com/problems/FLOW013

// problem statement
// Valid Triangles 
// Write a program to check whether a triangle is valid or not, when the three angles of the triangle are the inputs. A triangle is valid if the sum of all the three angles is equal to 180 degrees.

// Input
// The first line contains an integer T, the total number of testcases. Then T lines follow, each line contains three angles A, B and C, of the triangle separated by space.

// Output
// For each test case, display 'YES' if the triangle is valid, and 'NO', if it is not, in a new line.

// Constraints
// 1 ≤ T ≤ 1000
// 1 ≤ A,B,C ≤ 180
// Example
// Input

// 3 
// 40 40 100
// 45 45 90
// 180 1 1
// Output

// YES
// YES
// NO


#include<stdio.h>
int main()
{
    int k;
    scanf("%d",&k);
    while (k--)
    {
        int a,b,c;
        int ang;
        scanf("%d%d%d",&a,&b,&c);
        ang=a+b+c;
        if (ang==180)
        {
            printf("YES");
            printf("\n");
        }
        else
        {
            printf("NO");
            printf("\n");
        }
        
    }
    
}