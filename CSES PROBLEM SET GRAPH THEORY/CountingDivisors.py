import math
mod=int(1e6)+1
spf=[0 for i in range(mod)]
def sieve():
    spf[1]=1
    for i in range(2,mod):
        spf[i]=i
    for i in range(2,mod,2):
        spf[i]=2
    for i in range(3,math.ceil(math.sqrt(mod))):
        if(spf[i]==i):
            for j in range(i*i,mod,i):
                if(spf[j]==j):
                    spf[j]=i
sieve()
t=int(input())
for i in range(t):
    n=int(input())
    mp={}
    while(n!=1):
        x=spf[n]
        if x in list(mp.keys()):
            mp[x]+=1
        else:
            mp[x]=1
        n=n//x
    ans=1
    for item in list(mp.keys()):
        ans*=(mp[item]+1)
    print(ans)


