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
    vector<P> ba(n);
    rep(i, n) cin >> ba[i].second >> ba[i].first;

    sort(ba.rbegin(), ba.rend());
    int time = ba[0].first;
    for(auto t : ba){
        time = min(time, t.first);
        time -= t.second;
        if(time < 0){
            cout << "No\n";
            return 0;
        }
    }

    cout << "Yes\n";
    return 0;
}