#include<bits/stdc++.h>
using namespace std;

//'0'をcharから引くことにより数値が得られる
long long base8_to_long(string n) {
    long long res = 0;
    for(int i=0; i<n.size(); ++i) {
        res = res * 8 + int(n[i] - '0');
    }
    return res;
}

string long_to_base9(long long n) {
    if (n == 0) return "0";

    string res;
    while (n > 0) {
        res = char(n % 9 + '0') + res;
        n /= 9;
    }
    return res;
}

int main() {
    string n;
    int k;
    cin >> n >> k;

    //from 8 to 9
    for(int i=0; i<k; i++) {
        n = long_to_base9(base8_to_long(n));
        for (int j=0; j<n.size(); ++j) {
            if(n[j] == '8') n[j] = '5';
        }
    }
    cout << n << endl;
    return 0;
}