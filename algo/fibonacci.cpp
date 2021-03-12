#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

// 正整数nを受け取って，フィボナッチ数列の
// 第n項目を返す。

int fibo(int n){
    if (n==0) return 0;
    else if (n==1) return 1;

    int result = fibo(n-1)+fibo(n-2);
    return result;
}

int main() {
    int n;
    cin >> n;
    cout << fibo(n) << endl;
}