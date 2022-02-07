# problem link=https://www.codechef.com/problems/FLOW016

# problem statement 
# GCD and LCM 
# Two integers A and B are the inputs. Write a program to find GCD and LCM of A and B.

# Input
# The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer A and B.

# Output
# Display the GCD and LCM of A and B separated by space respectively. The answer for each test case must be displayed in a new line.

# Constraints
# 1 ≤ T ≤ 1000
# 1 ≤ A,B ≤ 1000000
# Example
# Input
# 3 
# 120 140
# 10213 312
# 10 30

# Output

# 20 840
# 1 3186456
# 10 30



import math
t=int(input())
for i in range(t):
    a,b=map(int,input().split())
    g=math.gcd(a,b)
    l=(a//g)*(b//g)*g
    print(g,l)