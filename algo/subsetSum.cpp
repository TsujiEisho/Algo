#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

"""
部分和問題を再帰を使って解く。
例：n, w, a = 4, 14, (3, 2, 6, 5)
イメージとしては，各要素を配列に格納しておいて前から見ていくときに
3を選ぶ場合は11を(2, 6, 5)のいずれかを使って作れるか
-> さらに2を使う場合を考えて9=(14-3-2)を(6, 5)を使って作れるか
...
最後に)0を()を使って作れるか というしぼんでいくイメージ。
"""

bool func(int i, int w, const vector<int> &a){
    // ベースケース
    if (i==0){
        if (w==0) return true;
        else return false;
    }

    // a[i-1]を選ばない場合
    if (fun(i-1, w, a)) return true;

    // a[i-1]を選ぶとき
    if (func(i-1), w-a[i-1], a) return true;

    // どちらもfalseの場合はfalseを返す
    return false;
}


int main() {
    int i, w;
    cin >> n, w;
    rep(i, n) cin >> a[i];

    // 再帰する
    if (func(i, w, a)) cout << "Yes" << endl;
    else cout << "No" << endl;
}