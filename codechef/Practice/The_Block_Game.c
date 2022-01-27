// problem link=https://www.codechef.com/submit/PALL01

// problem statement
// The Block Game 
 

// The citizens of Byteland regularly play a game. They have blocks each denoting some integer from 0 to 9. These are arranged together in a random manner without seeing to form different numbers keeping in mind that the first block is never a 0. Once they form a number they read in the reverse order to check if the number and its reverse is the same. If both are same then the player wins. We call such numbers palindrome.

// Ash happens to see this game and wants to simulate the same in the computer. As the first step he wants to take an input from the user and check if the number is a palindrome and declare if the user wins or not. 

// Input
// The first line of the input contains T, the number of test cases. This is followed by T lines containing an integer N.

// Output
// For each input output "wins" if the number is a palindrome and "loses" if not, in a new line.

// Constraints
// 1<=T<=20
// 1<=N<=20000
// Input:
// 3
// 331
// 666
// 343

// Output:
// loses
// wins
// wins





#include<stdio.h>
int main()
{
    int k;
    scanf("%d",&k);
    while (k--)
    {
        int n;
        int rev=0,digit,n1;
        scanf("%d",&n);
        n1=n;
        for (int i =  n; i !=0; i=i/10)
        {
            digit=i%10;
            rev=(rev*10)+digit;
        }
        if (n1==rev)
        {
           printf("wins\n");
        }
        else
        {
        printf("loses\n");
        }
        
        

    }
    
}
    
    