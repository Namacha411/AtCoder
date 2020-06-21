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
    int x, y;
    cin >> x >> y;

    rep(kame, x+1){
        rep(turu, x+1){
            if(kame + turu != x) continue;
            int asi = kame*4 + turu*2;
            if(asi == y){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;
}