// problem link=https://www.codechef.com/FEB222C/problems/NOFIX

// problem statement
// Avoid Fixed Points Problem Code: NOFIX
// Add problem to Todo list
// Submit
// Chef has a sequence of N integers A=[A1,A2,…,AN]. He can perform the following operation any number of times (possibly, zero):

// Choose any positive integer K and insert it at any position of the sequence (possibly the beginning or end of the sequence, or in between any two elements).
// For example, if A=[5,3,4] and Chef selects K=2, then after the operation he can obtain one of the sequences [2–,5,3,4],[5,2–,3,4],[5,3,2–,4], or [5,3,4,2–].

// Chef wants this sequence to satisfy the following condition: for each 1≤i≤∣A∣, Ai≠i. Here, ∣A∣ denotes the length of A.

// Help Chef to find the minimum number of operations that he has to perform to achieve this goal. It can be proved that under the constraints of the problem, it's always possible to achieve this goal in a finite number of operations.

// Input Format
// The first line of input contains an integer T, denoting the number of test cases. The description of T test cases follows.
// The first line of each test case contains an integer N.
// The second line contains N space-separated integers A1,A2,…,AN.
// Output Format
// For each test case, print a single line containing one integer — the minimum number of operations that Chef has to perform to achieve the given condition.

// Constraints
// 1≤T≤104
// 1≤N≤105
// 1≤Ai≤109
// Sum of N over all test caes does not exceed 2⋅105.
// Subtasks
// Subtask #1 (100 points): Original constraints

// Sample Input 1 
// 3
// 3
// 2 4 5
// 3
// 4 1 3
// 4
// 3 2 4 2
// Sample Output 1 
// 0
// 1
// 2



#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);  //taking input n fot no of element in array
        int a[n];
        int c=0;  //taking a contable variable for when number is same at that  index
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            int k=i+1+c;  //idex of cheching element with given array index
            if (k==a[i])
            {
                c=c+1;
            }
            
        }
       printf("%d\n",c); 
    }
    
}