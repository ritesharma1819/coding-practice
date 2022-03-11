// problem link=https://www.codechef.com/MARCH221D/problems/WORDLE

// problem statement
// Wordle Problem Code: WORDLE
// Add problem to Todo list
// Submit
// Chef invented a modified wordle.

// There is a hidden word S and a guess word T, both of length 5.

// Chef defines a string M to determine the correctness of the guess word. For the ith index:

// If the guess at the ith index is correct, the ith character of M is G.
// If the guess at the Ith index is wrong, the ith character of M is B.
// Given the hidden word S and guess T, determine string M.

// Input Format
// First line will contain T, number of test cases. Then the test cases follow.
// Each test case contains of two lines of input.
// First line contains the string S - the hidden word.
// Second line contains the string T - the guess word.
// Output Format
// For each test case, print the value of string M.

// You may print each character of the string in uppercase or lowercase (for example, the strings BgBgB, BGBGB, bgbGB and bgbgb will all be treated as identical).

// Constraints
// 1≤T≤1000
// |S|=|T|=5
// S,T contain uppercase english alphabets only.
// Sample Input 1 
// 3
// ABCDE
// EDCBA
// ROUND
// RINGS
// START
// STUNT
// Sample Output 1 
// BBGBB
// GBBBB
// GGBBG



#include<stdio.h>
int main()
{
    int t;
    // taking input for number of cases
    scanf("%d",&t);
    while (t--)
    {
        char s[10],T[10];
        // taking input of two string 
        scanf("%s",&s);
        scanf("%s",&T);
        char k[10]; //taking a string to store char 
        for (int i = 0; i <5; i++)
        {
            if (s[i]==T[i])
            {
                 k[i]='G';
            }
            else
               k[i]='B';
        }

        printf("%s\n",k);
        
    }
    
}