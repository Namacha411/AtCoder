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
    Time t1, t2;
    int k;
    cin >> t1.h >> t1.m >> t2.h >> t2.m >> k;
    
    int ans = (t2.h-t1.h)*60 + (t2.m-t1.m) - k;

    cout << ans << endl;
    return 0;
}