def update(i,value):
    while(i<=n):
        bit[i]+=value
        i+=(i&(-i))
def RangeSum(i):
    sum1=0
    while i>0:
        sum1+=bit[i]
        i-=(i&(-i))
    return sum1
n,q=map(int,input().split())
l=[int(x) for x in input().split()]
l.insert(0,0)
bit=[0 for i in range(n+1)]
for i in range(1,n+1):
    update(i,l[i])
# print(bit)
while q!=0:
    q-=1
    t,a,b=map(int,input().split())
    if t==1:
        update(a,b-l[a])
        l[a]=b
        # print(bit)
    else:
        print(RangeSum(b)-RangeSum(a-1))
