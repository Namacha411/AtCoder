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
    vector<P> a(n);
    rep(i, n){
        cin >> a[i].first;
        a[i].second = i + 1;
    }

    sort(a.rbegin(), a.rend());

    for(auto t : a){
        cout << t.second << endl;
    }
    return 0;
}