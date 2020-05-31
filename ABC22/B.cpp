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
    int n; cin >> n;
    vi a(n);
    rep(i, n) cin >> a[i];

    map<int, int> mp;
    for(int t : a) mp[t]++;
    int ans = 0;
    for(auto t : mp) if(t.second >= 2) ans += t.second-1;

    cout << ans << endl;
    return 0;
}