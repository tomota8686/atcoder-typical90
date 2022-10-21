#include<bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    deque<int> dq;
    int t[q], x[q];

    for(int i=0; i<q; ++i) {
        cin >> t[i] >> x[i];
    }

    for(int i=0; i<q; ++i) {
        if(t[i] == 1) dq.push_front(x[i]);
        else if(t[i] == 2) dq.push_back(x[i]);
        else if(t[i] == 3) cout << dq[x[i]-1] << endl;
    }

    return 0;
}