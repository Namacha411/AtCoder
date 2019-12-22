//
// Created on 2019/12/05.
//

#include <bits/stdc++.h>
using namespace std;
typedef signed long long ll;
typedef long double ld;
#define rep(i,n) for(int i = 0; i < (n); i++)
#define all(x) x.begin(),x.end()
#define DEBUG

int main()
{
    int a, b;
    cin >> a >> b;

    int ans = 0;
    if(a > b) ans = 2 * a - 1;
    else if(a < b) ans = 2 * b - 1;
    else if(a == b) ans = a * 2;

    cout << ans << endl;
    return 0;
}

