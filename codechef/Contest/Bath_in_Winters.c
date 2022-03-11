// problem link=https://www.codechef.com/MARCH221D/problems/BATH

// problem statement
// Bath in Winters Problem Code: BATH
// Add problem to Todo list
// Submit
// A geyser has a capacity of X litres of water and a bucket has a capacity of Y litres of water.

// One person requires exactly 2 buckets of water to take a bath. Find the maximum number of people that can take bath using water from one completely filled geyser..

// Input Format
// First line will contain T, number of test cases. Then the test cases follow.
// Each test case contains a single line of input, two integers X,Y.
// Output Format
// For each test case, output the maximum number of people that can take bath.

// Constraints
// 1≤T≤1000
// 1≤X,Y≤100
// Sample Input 1 
// 4
// 10 6
// 25 1
// 100 10
// 30 40
// Sample Output 1 
// 0
// 12
// 5
// 0


#include<stdio.h>
int main()
{
    int t;
    // taking input for number of test cases
    scanf("%d",&t);
    while (t--)
    {
        int x ,y;
        // taking input for greyser and bucket water capacity in liters
        scanf("%d%d",&x,&y);
        int req;
        req=2*y;  //caluating requried water for bath
        printf("%d\n", x/req);

    }
    
}