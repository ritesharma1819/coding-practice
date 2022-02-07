# problem link=https://www.codechef.com/problems/FLOW010

# problem statement
# Id and Ship 
# Write a program that takes in a letterclass ID of a ship and display the equivalent string class description of the given ID. Use the table below.

# Class ID	Ship Class
# B or b	BattleShip
# C or c	Cruiser
# D or d	Destroyer
# F or f	Frigate
# Input
# The first line contains an integer T, the total number of testcases. Then T lines follow, each line contains a character.

# Output
# For each test case, display the Ship Class depending on ID, in a new line.

# Constraints
# 1 ≤ T ≤ 1000
# Example
# Input

# 3 
# B
# c
# D

# Output
# BattleShip
# Cruiser
# Destroyer


t=int(input())
for i in range(t):
  ch=input()
  if ch=='b' or ch=='B' :
    print("BattleShip")
  elif ch=='c' or ch=='C':
    print("Cruiser")
  elif ch=='d' or ch=='D':
    print("Destroyer")
  elif ch=='f' or ch=='F':
    print("Frigate")
  else:
    pass
  
