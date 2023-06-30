#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, q;
    vector<int> a;

    //import
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    cin >> q;

    //sort
    sort(a.begin(), a.end());

    //main
    //int mid = a[n/2];
    int b, ret, tm_abs;
    for(int i=0; i<q; i++) {
        cin >> b;
        for(int j=0; j<n; j++) {
            tm_abs = abs(a[j]-b);
            if(j==0) ret = tm_abs;
            else {
                if(ret>tm_abs) ret = tm_abs;
                if(ret<tm_abs && a[j]<b) break;
            }
        }
        // if(mid < b) {
        //     for(int j=0; j<n/2; j++) {
        //         tm_abs = abs(a[j]-b);
        //         if(j==0) ret = tm_abs;
        //         else {
        //             if(ret>tm_abs) ret = tm_abs;
        //             if(ret<tm_abs && a[j]<b) break;
        //         }
        //     }
        // }else {
        //     for(int j=n/2; j<n; j++) {
        //         tm_abs = abs(a[j]-b);
        //         if(j==0) ret = tm_abs;
        //         else {
        //             if(ret>tm_abs) ret = tm_abs;
        //             if(ret<tm_abs && a[j]<b) break;
        //         }
        //     }
        // }
        cout << ret;
    }

    //解法：C++の標準ライブラリの二分探索関数lower_boundを使う


}