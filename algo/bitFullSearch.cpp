#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

// 部分和問題つまり，n個の正整数の集合Aと整数wが与えられAの
// 部分集合で，和がwになるものがあるかどうかを判定することを考える。


int main() {
    int n, w;
    cin >> n >> w;
    vector<int>A(n);
    rep(i, n) cin >> A[i];

    bool exist = false;

    for (int bit=0; bit < (1 << n); bit++){
        int sum=0; //部分集合に含まれる要素数
        rep(i, n){
            // i番目の要素A[i]を部分集合に入れると考えるかどうか
            if (bit & (1 << i)){
            sum += A[i];
            }
        }
        if (sum == w) exist = true;
    }

    if (exist) cout << "Yes" <<endl;
    else cout << "No" <<endl;
}
