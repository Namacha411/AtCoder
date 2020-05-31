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

struct Time{
    int h, m;
};

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cout << fixed << setprecision(6);
    int n; cin >> n;
    vi a(n);
    rep(i, n+1) cin >> a[i];

    //ok?
    reverse(all(a));
    int min = 1 << n;
    bool isOk = true;
    for(int t : a){
        
    }
    return 0;
}