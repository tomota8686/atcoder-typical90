#include<bits/stdc++.h>
using namespace std;

long long n;
int main() {
    cin >> n;
    string s[n+1];

    for(int i=1; i<n+1; i++) {
        cin >> s[i];
    }

    bool jud = false;
    for(int i=1; i<n+1; i++) {
        jud = false;
        for(int j=1; j<i; j++) {
            if(jud == true) continue;
            if(s[i] == s[j]) {
                jud = true;
                continue;
            }
        }
        if(jud == false) cout << i << endl;
    }
}


//======================以下模範解答
/*
#include <iostream>
#include <string>
#include <map>
using namespace std;

int N;
string S[1 << 18];
map<string, int> Map;

int main() {
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> S[i];
		if (Map[S[i]] == 0) {
			Map[S[i]] = 1;
			cout << i << endl;
		}
	}
	return 0;
}
*/