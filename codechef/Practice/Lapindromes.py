# problem link=https://www.codechef.com/problems/LAPIN

# problen statement
# Lapindromes 
# Lapindrome is defined as a string which when split in the middle, gives two halves having the same characters and same frequency of each character. If there are odd number of characters in the string, we ignore the middle character and check for lapindrome. For example gaga is a lapindrome, since the two halves ga and ga have the same characters with same frequency. Also, abccab, rotor and xyzxy are a few examples of lapindromes. Note that abbaab is NOT a lapindrome. The two halves contain the same characters but their frequencies do not match.
# Your task is simple. Given a string, you need to tell if it is a lapindrome.

# Input:
# First line of input contains a single integer T, the number of test cases.
# Each test is a single line containing a string S composed of only lowercase English alphabet.
# Output:
# For each test case, output on a separate line: "YES" if the string is a lapindrome and "NO" if it is not.
# Constraints:
# 1 ≤ T ≤ 100
# 2 ≤ |S| ≤ 1000, where |S| denotes the length of S
# Example:
# Input:
# 6
# gaga
# abcde
# rotor
# xyzxy
# abbaab
# ababc


# Output:
# YES
# NO
# YES
# YES
# NO
# NO



for _ in range(int(input())):
    string=input()
    # creating two empty dictionary for storing half half string in each 
    d1={}
    d2={}
    l=len(string) 
    f=0  #storing starting charchter of string at here 
    e=l-1  #storing last charchter of string at here
    while e>f: 
        left=string[f]
        right=string[e]
        if left in d1:
            d1[left]=d1[left]+1
        else:
            d1[left]=1


        if right in d2:
            d2[right]=d2[right]+1
        else:
            d2[right]=1

    #    updating indexes of string  
        f=f+1  
        e=e-1;


    if d1==d2:
        print("YES")
    else:
        print("NO")
