// problem link=https://www.codechef.com/FEB222C/problems/WCC

//  problem statement
//  World Chess Championship Problem Code: WCCSolvedSubmit
//  The World Chess Championship 2022 is about to start. 14 Classical games will be played between Chef and Carlsen in the championship, where each game has one of three outcomes — it can be won by Carlsen, won by Chef, or it can be a draw. The winner of a game gets 2 points, and the loser gets 0 points. If it’s a draw, both players get 1 point each.

//  The total prize pool of the championship is 100⋅X. At end of the 14 Classical games, if one player has strictly more points than the other, he is declared the champion and gets 60⋅X as his prize money, and the loser gets 40⋅X.

//  If the total points are tied, then the defending champion Carlsen is declared the winner. However, if this happens, the winner gets only 55⋅X, and the loser gets 45⋅X.

//  Given the results of all the 14 games, output the prize money that Carlsen receives.

//  The results are given as a string of length 14 consisting of the characters C, N, and D.

//  C denotes a victory by Carlsen.
//  N denotes a victory by Chef.
//  D denotes a draw.
//  Input Format
//  The first line of input contains an integer T, denoting the number of test cases. The description of T test cases follows.
//  The first line of each test case contains one integer X, denoting that the total prize pool is 100⋅X.
//  The second line contains the results of the match, as a string of length 14 containing only the characters C, N, and D.
//  Output Format
//  For each test case, output in a single line the total prize money won by Carlsen.

//  Constraints
//  1≤T≤1000
//  1≤X≤106
//  |S|=14
//  S contains only characters D, C, N.
//  Subtasks
//  Subtask #1 (100 points): Original constraints

//  Sample Input 1 
//  4
//  100
//  CCCCCCCCCCCCCC
//  400
//  CDCDCDCDCDCDCD
//  30
//  DDCCNNDDDCCNND
//  1
//  NNDNNDDDNNDNDN
//  Sample Output 1 
//  6000
//  24000
//  1650
//  40



#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int x;
        scanf("%d",&x);
        char s[14];   // taking string as input  with size 14
        scanf("%s",&s);
        int c1=0,c2=0,c3=0; 
        for (int i = 0; i <14 ; i++)
        {
        //    scanf("%s",&s[i]);
            if(s[i]=='C')
            {
                c1=c1+1;
            }
            else if (s[i]=='N')
            {
                c2=c2+1;
            }
            else if (s[i]=='D')
            {
                c3=c3+1;
            }
        }
        if (c1<c2)  //condition for carlsen won
        {
            printf("%d\n",60*x);
        }
        else if (c1==c2)    //condition for when match gone to be tie
        {
            printf("%d\n",55*x);
        }
        else if (c1>c2)  //condition for when carlsen going to be loos the match
        {
            printf("%d\n",40*x);
        }
        
    }
    
}