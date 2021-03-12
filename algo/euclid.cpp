#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG


// ユークリッドの互除法。
// 2整数mとnを受け取ってその最大公約数を返す。

int euclid(int m , int n){
    int r = m%n;
    if (r==0){
        return n;
    }
    else
        m = n; n =r;
        return euclid(m, n);
    }
}


int main() {
    int m, n;
    cin >> m >> n;
    cout << euclid(m, n) << endl;
}