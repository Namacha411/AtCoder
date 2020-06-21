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
    int x, n;
    cin >> x >> n;
    vi p(n);
    rep(i, n) cin >> p[i];

    int MAX = 102;
    vector<bool> tbl(MAX, false);
    for(int t : p)
        tbl[t] = true;
    int MIN = MAX;
    int ans = 0;
    for(int i = 0; i < MAX; i++){
        if(tbl[i]) continue;
        if(MIN > abs(x-i)){
            ans = i;
            MIN = abs(x-i);
        }
    }

    cout << ans << endl;
    return 0;
}