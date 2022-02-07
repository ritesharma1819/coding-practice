// problem link=https://www.codechef.com/problems/PRB01

// problem statement
// Primality Test 
// Alice and Bob are meeting after a long time. As usual they love to play some math games. This times Alice takes the call and decides the game. The game is very simple, Alice says out an integer and Bob has to say whether the number is prime or not. Bob as usual knows the logic but since Alice doesn't give Bob much time to think, so Bob decides to write a computer program.

// Help Bob accomplish this task by writing a computer program which will calculate whether the number is prime or not .

// Input
// The first line of the input contains an integer T, the number of testcases. T lines follow.

// Each of the next T lines contains an integer N which has to be tested for primality.

// Output
// For each test case output in a separate line, "yes" if the number is prime else "no."

// Constraints
// 1 ≤ T ≤ 20
// 1 ≤ N ≤ 100000
// Sample Input 1 
// 5
// 23
// 13
// 20
// 1000
// 99991
// Sample Output 1 
// yes
// yes
// no
// no
// yes



#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        int flag=0;
        scanf("%d",&n);
        for (int i = 2; i < n; i++)
        {
            if(n%i==0)
            flag=1;
        }
        if (n==0 || n==1)
        {
            flag=1;
        }
        if (flag==1)
        {
            printf("no\n");
        }
        else
        printf("yes\n");
        
        
        
    }
    
}