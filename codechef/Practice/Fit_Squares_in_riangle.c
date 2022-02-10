// problem link=https://www.codechef.com/problems/TRISQ

// problem statement
// Fit Squares in Triangle 
// Read problems statements in Mandarin Chinese and Russian as well.
// What is the maximum number of squares of size 2x2 that can be fit in a right angled isosceles triangle of base B.
// One side of the square must be parallel to the base of the isosceles triangle.
// Base is the shortest side of the triangle
// Input
// First line contains T, the number of test cases.
// Each of the following T lines contains 1 integer B.
// Output
// Output exactly T lines, each line containing the required answer.
// Constraints
// 1 ≤ T ≤ 103
// 1 ≤ B ≤ 104
// Sample Input

// 11
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 10
// 11
// Sample Output 

// 0
// 0
// 0
// 1
// 1
// 3
// 3
// 6
// 6
// 10
// 10



#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)   //loop for number of test cases
    {
        int b;
        int s=0;
        scanf("%d",&b);
        while (b>3)    //cheching condition the base value less than 3 or not
        {
            b-=2;   //reducing value of b at least 2 unit because requirment of square needed 2x2 base
            s+=1;
        }
        int ans;
        ans=(s*(s+1))/2;  //step for claculating total base requried
        printf("%d\n",ans);
    }
    return 0;
}