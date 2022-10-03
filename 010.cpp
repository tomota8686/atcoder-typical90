#include<bits/stdc++.h>
using namespace std;

int  n, q, l, r;
int one, two;

int main() {
    cin >> n;

    int c[n+1], p[n+1];

    for(int i=1; i<=n; i++) {
        cin >> c[i] >> p[i];
    }
    cin >> q;
    int l[q+1], r[q+1];
    for(int i=1; i<=q; i++) cin >> l[i] >> r[i];

    for(int i=1; i<=q; i++) {
        one = 0;
        two = 0;
        for(int j=l[i]; j<=r[i]; j++) {
            if(c[j]==1) one += p[j];
            else if(c[j]==2) two += p[j];
        }
        cout << one << " " << two << endl;
    }

    return 0;

}

//現状:TLEする
//解決法:区分累積和を使う