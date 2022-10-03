#include<bits/stdc++.h>
using namespace std;

int h, w;
int a[2099][2099];
int Row[2009], Column[2009];
int answer[2009][2009];

int main() {

    cin >> h >> w;
    for(int i=1;i<=h;i++) {
        for(int j=1;j<=w;j++) {
            cin >> a[i][j];
        }
    }

    for(int i=1;i<=h;i++) {
        for(int j=1;j<=w;j++) {
            Row[i] += a[i][j];
            Column[j] += a[i][j];
        }
    }

    for(int i=1;i<=h;i++) {
        for(int j=1;j<=w;j++) {
            answer[i][j] = Row[i] + Column[j] - a[i][j];
        }
    }

    //出力
    for(int i=1;i<=h;i++) {
        for(int j=1;j<=w;j++) {
            cout << answer[i][j] << " ";
        }
        cout << endl;
    }

    return 0;

}