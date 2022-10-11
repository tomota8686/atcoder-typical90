#include<bits/stdc++.h>
using namespace std;

long long n, p, q;

int main() {
    cin >> n >> p >> q;
    long long a[n+1];
    for (int i=1; i<n+1; i++) {
        cin >> a[i];
    }

    int cnt = 0;

    for(int i=1; i<n+1; i++) {
        for(int j=1; j<i; j++) {
            for(int k=1; k<j; k++) {
                for(int l=1; l<k; l++) {
                    for(int m=1; m<l; m++){
                        if(1LL*a[i]*a[j]%p*a[k]%p*a[l]%p*a[m] % p == q) cnt++;
                    }
                }
            }
        }
    }

    cout << cnt << endl;
    return 0;

}