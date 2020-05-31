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
    int n, m;
    cin >> n >> m;
    unordered_map<int, unordered_set<int>> teikibin;
    rep(i, m) {
        int a, b;
        cin >> a >> b;
        teikibin[a].insert(b);
    }
    
    for(int i = 1; i < n; i++){
        if(teikibin[1].find(i) != teikibin[i].end() && teikibin[i].find(n) != teikibin[i].end()){
            cout << "POSSIBLE\n";
            return 0;
        }
    }

    cout << "IMPOSSIBLE\n";
    return 0;
}