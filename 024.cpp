#include<bits/stdc++.h>
using namespace std;

long long n, k;
long long cnt = 0;

int main() {
    //入力
    cin >> n >> k;
    long long a[n+1], b[n+1];
    for(int i=1; i<n+1; i++) {
        cin >> a[i];
    }
    for(int i=1; i<n+1; i++) {
        cin >> b[i];
    }

    //計算
    cnt = 0;
    for(int i=1; i<n+1; i++) {
        if (a[i] != b[i]) cnt += abs(a[i] - b[i]) + 1;
    }

    if (k == cnt) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}