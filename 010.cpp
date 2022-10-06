#include<bits/stdc++.h>
using namespace std;

int  n, q, l, r;
int tmp;
int tm_c, tm_p;

int main() {
    //入力
    cin >> n;
    int c[n+1], p[n+1];
    int tm_c = 0;
    int tm_p = 0;
    for(int i=1; i<=n; i++) {
        tmp = 0;
        cin >> tmp;
        tm_c += tmp;
        cin >> tmp;
        tm_p += tmp;
        c[i] = tm_c;
        p[i] = tm_p;
    }

    cin >> q;
    int l[q+1], r[q+1];
    for(int i=1; i<=q; i++) cin >> l[i] >> r[i];

        //処理
    for(int i=1; i<=q; i++) {
        
    }

    return 0;

}

//現状:TLEする
//解決法:区分累積和を使う