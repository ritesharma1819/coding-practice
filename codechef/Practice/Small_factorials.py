
# problem link=https://www.codechef.com/problems/FCTRL2

# problem statement
# Small factorials 
# A tutorial for this problem is now available on our blog. Click here to read it.
# You are asked to calculate factorials of some small positive integers.

# Input
# An integer t, 1<=t<=100, denoting the number of testcases, followed by t lines, each containing a single integer n, 1<=n<=100.

# Output
# For each integer n given at input, display a line with the value of n!

# Example
# Sample input:
# 4
# 1
# 2
# 5
# 3
# Sample output:

# 1
# 2
# 120
# 6



k=int(input())
fact=1
for i in range(1,k+1):
    n=int(input())
    for i in range (1,n+1):
        fact=fact*i
    print(fact)
    fact=1
