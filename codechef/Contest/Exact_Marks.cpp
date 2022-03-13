// problem link=https://www.codechef.com/MARCH221D/problems/GENIUS

// problem statement:
// Exact Marks Problem Code: GENIUS
// Add problem to Todo list
// Submit
// Chef attempted an exam consisting of N objective questions. The marking scheme of the exam is:

// +3 marks for a correct answer.
// −1 marks for an incorrect answer.
// 0 marks for an unattempted question.
// Find whether it is possible for Chef to score exactly X marks.

// If it is possible, print 3 integers A, B, and C denoting the number of correct answers, incorrect answers and unattempted questions respectively.

// Input Format
// First line will contain T, number of test cases. Then the test cases follow.
// Each test case contains of a single line of input, two integers N,X.
// Output Format
// For each test case, print YES if it is possible to score exactly X marks, otherwise print NO.

// If the answer is YES, print 3 integers A, B and C in the next line such that:

// 0≤A,B,C≤N
// A+B+C=N
// Chef's total score is exactly X.
// In case of multiple answers, every valid tuple is accepted.

// You may print each character of the string in uppercase or lowercase (for example, the strings yEs, yes, Yes and YES will all be treated as identical).

// Constraints
// 1≤T≤1000
// 1≤N≤108
// 0≤X≤3⋅N
// Sample Input 1 
// 3
// 10 30
// 9 25
// 8 0
// Sample Output 1 
// YES
// 10 0 0
// NO
// YES
// 1 3 4



#include <iostream>
#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define mod 1e9 + 7


int main(){
ios::sync_with_stdio(0); cin.tie(0);
ll t;
cin>>t;
while(t--){
    ll N,X;
    cin>>N>>X;
    ll a=0,b=0,c=0;
    
    if(X%3==0){
        a+=(X/3);
    }
    else if(X%3==1){
        a+=(X/3)+1;
        b+=2;
    }
    else if(X%3==2){
        a+=X/3+1;
        b+=1;
    }

    if(a+b<=N){
        cout<<"YES"<<endl;
        cout<<a<<" "<<b<<" "<<N-a-b<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
}

}