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
    int n, k; cin >> n >> k;
    vi a(n); rep(i, n) cin >> a[i];

    vi ans(n, 0);
    rep(cnt, k){
        for(int i = 0; i < n; i++){
            for(int j = max(i-a[i], 0); j <= min(i+a[i], n); j++){
                ans[j] += 1;
            }
        }
        a = ans;
    }

    rep(t, n-1){
        cout << ans[t] << " ";
    }
    cout << ans.back() << endl;
    return 0;
}