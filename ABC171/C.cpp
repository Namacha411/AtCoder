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
    ll n; cin >> n;

    vector<char> tbl(1, 'z');
    for(char c = 'a'; c < 'z'; c++) tbl.push_back(c);
    vector<char> ans;
    while(n > 0) {
        if(n % 26 != 0){
            ans.push_back(tbl[n % 26]);
            n /= 26;
        } else {
            ans.push_back(tbl[26]);
            n = (n - 1) / 26;
        }
    }
    reverse(all(ans));

    for(char t : ans){
        cout << t;
    }
    cout << endl;
    return 0;
}