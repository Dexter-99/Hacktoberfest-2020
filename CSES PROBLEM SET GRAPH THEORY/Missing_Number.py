n=int(input())
l=[int(x) for x in input().split()]
ans=0
for i in range(1,n+1):
    ans^=i
for item in l:
    ans^=item
print(ans)

