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

    list<int> b;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            b.push_back(a[i]);
        } else {
            b.push_front(a[i]);
        }
    }
    if(n % 2 == 1) reverse(all(b));
    
    for_each(all(b), [](int t){ cout << t << " "; });
    cout << endl;
    return 0;
}