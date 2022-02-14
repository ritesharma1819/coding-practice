# problem link=https://www.codechef.com/FEB222C/problems/XORPAL

# problem statement
# Xor Palindrome Problem Code: XORPALSolvedSubmit
# A (1-indexed) binary string S of length N is called a xor palindrome if the value of Si⊕S(N+1−i) is the same for all 1≤i≤N.

# For example, 0, 1111 and 0101 are xor palindromes, while 1110 and 110101 are not.

# You are given a binary string S of length N. Determine if it is possible to rearrange it to form a xor palindrome or not.

# Input Format
# The first line of input contains a single integer T — the number of test cases. The description of T test cases follows.
# The first line of each test case contains an integer N — the length of the binary string S.
# The second line of each test case contains the binary string S containing 0s and 1s only.
# Output Format
# For each test case, output YES if it is possible to rearrange S to convert it into a xor palindrome. Otherwise output NO.

# You may print each character of YES and NO in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).

# Constraints
# 1≤T≤1000
# 1≤N≤105
# S is a binary string, i.e, contains only the characters 0 and 1
# It is guaranteed that the sum of N over all test cases does not exceed 2⋅105.
# Subtasks
# Subtask #1 (100 points): Original constraints

# Sample Input 1 
# 4
# 2
# 00
# 4
# 0011
# 3
# 001
# 4
# 0001
# Sample Output 1 
# YES
# YES
# YES
# NO



for i in range(int(input())):
    n=int(input())
    s=input()  #taking string as a input
    #taking two countable variable for 1 and 0 respectively
    c1=0
    c2=0
    for i in range(0,n):
        if(s[i]=='1'):
            c1=c1+1
        else:
            c2=c2+1
    #checking condition for xor operator if no of string is even then
    if n%2==0 :
            if c1==c2 or c1==n or c2==n :
                print("YES")
            elif c1%2==0 and c2%2==0 :
                print("YES")
            else:
                print("NO")
    else:    #if no of string is odd then that string or number always is a xor operator
        print("YES")