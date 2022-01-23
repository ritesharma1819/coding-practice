# problem link=https://www.codechef.com/problems/TSORT

# problem statement
# Turbo Sort 
# Given the list of numbers, you are to sort them in non decreasing order.
# Input
# t – the number of numbers in list, then t lines follow [t <= 10^6].
# Each line contains one integer: N [0 <= N <= 10^6]

# Output
# Output given numbers in non decreasing order.
# Example
# Input:

# 5
# 5
# 3
# 6
# 7
# 1
# Output:

# 1
# 3
# 5
# 6
# 7


k=int(input())
arr=[]
for i in range(1,k+1):
   n=int(input())
   arr.append(n)
arr.sort()
for item in arr:
  print(item)

