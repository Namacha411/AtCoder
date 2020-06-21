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
    ll a, v; cin >> a >> v;
    ll b, w; cin >> b >> w;
    ll t; cin >> t;

    ll dist = abs(a-b);
    ll vel = v - w;
    if(t*vel >= dist){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
