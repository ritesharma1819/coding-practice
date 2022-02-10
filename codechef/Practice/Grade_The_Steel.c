// problem link=https://www.codechef.com/problems/FLOW014

// problem statement
// Grade The Steel 
// A certain type of steel is graded according to the following conditions.

// Hardness of the steel must be greater than 50
// Carbon content of the steel must be less than 0.7
// Tensile strength must be greater than 5600
// The grades awarded are as follows:

// Grade is 10 if all three conditions are met
// Grade is 9 if conditions (1) and (2) are met
// Grade is 8 if conditions (2) and (3) are met
// Grade is 7 if conditions (1) and (3) are met
// Grade is 6 if only one condition is met
// Grade is 5 if none of the three conditions are met
// Write a program to display the grade of the steel, based on the values of hardness, carbon content and tensile strength of the steel, given by the user.

// Input
// The first line contains an integer T, total number of testcases. Then follow T lines, each line contains three numbers hardness, carbon content and tensile strength of the steel.

// Output
// For each test case, print Grade of the steel depending on Conditions, in a new line.

// Constraints
// 1 ≤ T ≤ 1000
// 0 ≤ hardness, carbon content, tensile strength ≤ 10000
// Sample Input
// 3 
// 53 0.6 5602
// 45 0 4500
// 0 0 0 
// Sample Output
// 10
// 6
// 6


#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    { 
        // taking hardness , carbob content, and tensile strength of steel as input respectively
        int a;
        scanf("%d",&a);
        float b;
        scanf("%f",&b);
        int c;
        scanf("%d",&c);
        // conditon for grade 10 when all requirement is full fill
        if (a>50 && b<0.7 && c>5600) 
        {
            printf("10");
        }
        // these are condition per their requirement
        else if (a>50 && b<0.7)
        {
            printf("9");
        }
        else if (b<0.7 && c>5600)
        {
            printf("8");
        }
        else if (a>50 && c>5600)
        {
            printf("7");
        }
        else if (a>50 || b<0.7 || c>5600)
        {
            printf("6");
        }
        else   //when no condition followed
         printf("5");
        
        printf("\n");
    }
    
}