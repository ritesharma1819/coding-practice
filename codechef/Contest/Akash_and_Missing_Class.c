// problem link=https://www.codechef.com/MARCH221D/problems/CHFCLASS

// problem statement:
// Akash and Missing Class Problem Code: CHFCLASS
// Add problem to Todo list
// Submit
// Akash loves going to school, but not on weekends.

// A week consists of 7 days (Monday to Sunday). Akash takes a leave every Saturday.

// If a month consists of N days and the first-day of the month is Monday, find the number of days Akash would take a leave in the whole month.

// Input Format
// First line will contain T, the number of test cases. Then the test cases follow.
// Each test case contains a single line of input, one integer N - the number of days in the month.
// Output Format
// For each test case, output in a single line, the number of days Akash would take a leave in the whole month.

// Constraints
// 1≤T≤100
// 1≤N≤109
// Subtasks
// Subtask 1 (30 points) : 1≤N≤100
// Subtask 2 (70 points) : Original Constraints
// Sample Input 1 
// 4
// 5
// 6
// 8
// 22
// Sample Output 1 
// 0
// 1
// 1
// 3


#include<stdio.h>
int main()
{
    int t;
    // take input for total number of cases
    scanf("%d",&t);
    while (t--)
    {
        int n;
        // take input for days in a month 
        scanf("%d",&n);
        if (n<6)
        {
            printf("%d\n",n/6);  //here we divid n with 6 because akash take leave school only saturday which is come afer 5 days 
        }
        else if (n>=6)
        {
            printf("%d\n",(n+1)/7);  //here we divid n with 7 because akash take leave school only saturday 
        }
        
    }
    
}