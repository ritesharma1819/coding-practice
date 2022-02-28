// problem link=https://www.codechef.com/problems/MASKPOL

// problem statement
// Mask Policy Problem Code: MASKPOLSolvedSubmit
// A city has been infected by a contagious virus.

// In a survey, it was found that A out of the N people living in the city are currently infected. It has been observed that the only way for a person to get infected is if he comes in contact with an already infected person, and both of them are NOT wearing a mask.

// The mayor of the city wants to make a new Mask Policy and find out the minimum number of people that will be required to wear a mask to avoid the further spread of the virus. Help the mayor in finding this number.

// Note: The only aim of the mayor is to stop virus spread, not to mask every infected person.

// Input Format
// The first line contains T - number of test cases. Then the test cases follow.
// The first and only line of each test case contains two integers N and A - the total number of people living in the city and the number of people already affected by the virus respectively.
// Output Format
// For each test case, output the minimum number of people that will be required to wear a mask so as to curb the virus spread.

// Constraints
// 1≤T≤105
// 2≤N≤400
// 1≤A<N
// Sample Input 1 
// 3
// 2 1
// 3 2
// 3 1
// Sample Output 1 
// 1
// 1
// 1


#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,a;
        scanf("%d%d",&n,&a);
        int mask;
        mask=n-a;
        if (mask<=a)
        {
            printf("%d\n",mask);
        }
        else
         printf("%d\n",a);
        
    }
    
}