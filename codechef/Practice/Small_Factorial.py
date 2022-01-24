# problem link=https://www.codechef.com/problems/FLOW018

# problem statement
# Small Factorial 
# Write a program to find the factorial value of any number entered by the user.

# Input
# The first line contains an integer T, the total number of testcases. Then T lines follow, each line contains an integer N.

# Output
# For each test case, display the factorial of the given number N in a new line.

# Constraints
# 1 ≤ T ≤ 1000
# 0 ≤ N ≤ 20
# Example
# Input
# 3 
# 3 
# 4
# 5

# Output

# 6
# 24
# 120



k=int(input())
fact=1
for i in range(0,k):
    n=int(input())
    for i in range(1,n+1):
        fact=fact*i
    print(fact)
    fact=1
    