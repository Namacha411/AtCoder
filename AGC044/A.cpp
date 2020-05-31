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

using viii = vector<pair<int, pair<int, int>>>;
#define sd second
#define ft first

viii bestCoin(ll a, ll b, ll c){
    const ll lcm = 30;
    viii vp(3, {0, {0, 0}});
    vp[0] = {a * lcm / 2, {a, 2}};
    vp[1] = {b * lcm / 3, {b, 3}};
    vp[2] = {c * lcm / 5, {c, 5}};
    sort(all(vp));
    reverse(all(vp));
    return vp;
}

int main(){
    int t; cin >> t;
    rep(i, t){
        //input
        ll n; cin >> n;
        ll a,b,c,d;
        cin >> n >> a >> b >> c >> d;
        //solve
        ll ans = 0;
        viii bc = bestCoin(a, b, c);
        while(n != 0){
            if(n >= bc[0].sd.ft){
                n /= bc[0].sd.ft;
                ans += bc[0].sd.sd;
            } else if(n >= bc[1].sd.ft){
                n /= bc[1].sd.ft;
                ans += bc[1].sd.sd;
            } else if(n >= bc[2].sd.ft){
                n /= bc[2].sd.ft;
                ans += bc[2].sd.sd;
            } else {
                n--;
                ans += d;
            }
        }
        //output
        cout << ans << endl;
    }
    return 0;
}