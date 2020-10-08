import sys
n,x=map(int,input().split())
l1=[int(x) for x in input().split()]
l=[]
l.extend(l1)
l.sort()
begin=0
end=n-1
while(begin<end):
    if (l[begin]+l[end])==x:
        x=l1.index(l[begin])
        y=l1.index(l[end])
        if x==y:
            y=l1.index(l1[y],x+1,n)
        print(x+1,y+1)
        sys.exit()
    if l[begin]+l[end]>x:
        end-=1
    else:
        begin+=1
print("IMPOSSIBLE")