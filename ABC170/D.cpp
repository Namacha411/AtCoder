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

    int MAX = 1000005;
    vi cnt(MAX, 0);
    for(int i : a){
        if(cnt[i] != 0){
            cnt[i] = 2;
            continue;
        }
        for(int x = i; x < MAX; x += i)
            cnt[x]++;
    }
    int ans = 0;
    for(int i : a){
        if(cnt[i] == 1) ans++;
    }

    cout << ans << endl;
    return 0;
}