// problem link=https://www.codechef.com/MARCH221D/problems/DISCUS

// problem statement
// Discus Throw Problem Code: DISCUS
// Add problem to Todo list
// Submit
// In discus throw, a player is given 3 throws and the throw with the longest distance is regarded as their final score.

// You are given the distances for all 3 throws of a player. Determine the final score of the player.

// Input Format
// First line will contain T, number of test cases. Then the test cases follow.
// Each test case contains of a single line of input, three integers A,B, and C denoting the distances in each throw.
// Output Format
// For each test case, output the final score of the player.

// Constraints
// 1≤T≤100
// 1≤A,B,C≤100
// Sample Input 1 
// 3
// 10 15 8
// 32 32 32
// 82 45 54
// Sample Output 1 
// 15
// 32
// 82


#include<stdio.h>
int main()
{
    // input for number of case 
    int t;
    scanf("%d",&t);
    while (t--)
    {
        // taking three input as a distace
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if (a>=b && a>=c)
        {
            printf("%d\n",a);
        }
        else if (b>=a && b>=c)
        {
            printf("%d\n",b);
        }
        else
          printf("%d\n",c);
        
        
    }
    
}