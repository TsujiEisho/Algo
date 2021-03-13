#include <bits/stdc++.h>
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG


// 再帰を使うよりも配列に格納していった方が速い。
// 理由としては再帰の時に返す値をいちいち計算するため。

int main() {
    vector<ll>F(50);
    F[0]=0, F[1]=1;
    int n;
    cin >> n;

    for (int i=2; i<=n; i++){
        F[i] = F[i-1] + F[i-2];
    }

    cout << F[n] <<endl;
}
