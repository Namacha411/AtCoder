#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using vi = vector<int>;
using vll = vector<ll>;
using P = pair<int, int>;

constexpr int INF = 1e9;
constexpr ll INFLL = 1e18;
constexpr int MOD = 1e9 + 7;
const ld PI = acosl(-1);

#define rep(i,n) for(int i=0; i<(n); ++i)
#define all(n) n.begin(),n.end()

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cout << fixed << setprecision(6);
    int n; cin >> n;
    vi a(n);
    rep(i, n) cin >> a[i];
    int q; cin >> q;
    vi b(q), c(q);
    rep(i, q) cin >> b[i] >> c[i];

    vi num(1e5+2, 0);
    ll ans = 0;
    for(int t : a){
        num[t]++;
        ans += t;
    }
    rep(i, q){
        ans += num[b[i]] * (c[i] - b[i]);
        cout << ans << endl;
        num[c[i]] += num[b[i]];
        num[b[i]] = 0;
    }
    return 0;
}