#include<bits/stdc++.h>

void solve() {
    
    int n;
    read(n);
 
    vector<int> v(n);
    fr (i,n) read(v[i]);
 
    int ans(1), k = 1;
    fr (i, n-1) {
 
        int x = v[i];
        if (2*x >= v[i+1]) {
            ++k;
            ans = max(ans, k);
        }
        else 
            k= 1;
 
    }
 
    cout << ans <<endl;
 
}   
 
int main() {
    
    fastio;
    
    //Skipped in presense of online judge.
    #ifndef ONLINE_JUDGE
    freopen("D:/Competitive/inputf.in","r",stdin);
    freopen("D:/Competitive/outputf.in","w",stdout);
    #endif
    
    int t(1);
    // cin >> t;
 
    frj(i, 1, t+1) {
        // printCase(i);
        solve();
    }
    
    return 0;
    
}
