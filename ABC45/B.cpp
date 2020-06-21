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

void dfs(vector<deque<int>> a, int n){
    if(a[n].size() == 0){
        cout << (char)(n + 'A') << endl;
        return;
    }
    int t = a[n].front();
    a[n].pop_front();
    dfs(a, t);
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cout << fixed << setprecision(6);
    vector<deque<int>> a(3);
    rep(i, 3){
        string s; cin >> s;
        rep(j, s.length())
            a[i].push_back((int)(s[j] - 'a'));
    }

    dfs(a, 0);
    return 0;
}