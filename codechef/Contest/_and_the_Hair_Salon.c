// problem link=https://www.codechef.com/FEB221C/problems/CHEFBARBER

// problem statement
// Chef and the Hair Salon

// Chef recently realized that he needs a haircut, and went to his favorite hair salon. At the salon, he found N customers waiting for their haircuts. From his past experience, Chef knows that the salon takes M minutes per customer. Only one person can get their haircut at a time.

// For how many minutes will Chef have to wait before he can get his haircut?

// Input Format
// The first line of input contains a single integer T, denoting the number of test cases. The description of T test cases follows.
// The first and only line of each test case contains two space-separated integers N and M, as described in the problem.
// Output Format
// For each test case, print a single line containing one integer — the number of minutes that Chef will have to wait before he can get his haircut.

// Constraints
// 1≤T≤1000
// 0≤N≤1000
// 1≤M≤1000
// Subtasks
// Subtask #1 (100 points): Original constraints

// Sample Input 1 
// 2
// 2 15
// 0 15
// Sample Output 1 
// 30
// 0



#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,m;
        int ans=0;
        scanf("%d%d",&n,&m);
        for (int i = 0; i < n; i++)
        {
            ans=ans+m;
        }
        printf("%d\n",ans);
        
    }
    
}