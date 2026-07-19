# n = int(input())
# a = list(map(int, input().split()))

# a.sort()
# dis=0
# for i in range(n):
#     if i==0:
#         dis += 1
#     else:
#         if a[i] != a[i-1]:
#             dis += 1

# print(dis)
    

import sys

input_data = sys.stdin.read().split()
if input_data:
    n = int(input_data[0])
    a = [int(x) for x in input_data[1:]]

    a.sort()
    dis=0
    for i in range(n):
        if i==0:
            dis += 1
        else:
            if a[i] != a[i-1]:
                dis += 1

    print(dis)