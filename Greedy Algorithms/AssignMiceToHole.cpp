/*
Assign Mice to Holes

There are N Mice and N holes are placed in a straight line. Each hole can accommodate only 1 mouse. A mouse can stay at his position, move one step right from x to x + 1, or move one step left from x to x -1. Any of these moves consumes 1 minute. Assign mice to holes so that the time when the last mouse gets inside a hole is minimized.
*/

#include<bits/stdc++.h>
using namespace std;

void minTime() {

    int n;
    cin >> n;

    vector<int> micePos(n), holePos(n);
    for (int i=0; i<n; i++)
        cin >> micePos[i];

    for (int i=0; i<n; i++)
        cin >> holePos[i];

    sort(micePos.begin(), micePos.end());
    sort(holePos.begin(), holePos.end());

    int ans = 0;
    for (int i=0; i<n; i++) {
        ans = max(ans, abs(micePos[i] - holePos[i]));
    }

    cout << ans << endl;
}

int main() {

    #ifndef ONLINE_JUDGE
	freopen("D:/Competitive/inputf.in","r",stdin);
	freopen("D:/Competitive/outputf.in","w",stdout);
	#endif
	
    minTime();

    return 0;

}
