import numpy as np

n,m=input("Enter dimensions").split(" ")
n=int(n)
m=int(m)
row=np.array([])
for i in range(n):
    row=input().split(" ")