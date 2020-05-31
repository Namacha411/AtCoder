#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using vi = vector<int>;
using vll = vector<ll>;
using P = pair<int, int>;

const int INF = 1e9;
const ll INFLL = 1e18;
const int MOD = 1e9 + 7;
const int NIL = -1;
const ld PI = acosl(-1);

#define rep(i,n) for(int i=0; i<(n); ++i)
#define all(n) n.begin(),n.end()

int main(){
    int n, k;
    cin >> n >> k;
    vi a(n);
    rep(i, n) cin >> a[i];

    const int doubling = 60;
    vector<vi> to(doubling, vi(n, 0));
    rep(i, n) to[0][i] = a[i] - 1;
    rep(i, doubling-1) rep(j, n) {
        to[i+1][j] = to[i][to[i][j]];
    }
    int v = 0;
    for(int i = doubling-1; i >= 0; i--){
        ll l = 1LL << i;
        if(l <= k){
            v = to[i][v];
            k -= l;
        }
    }

    cout << v + 1 << endl;
    return 0;
}