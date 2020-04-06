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

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

set<bool> s;
bool dfs(const vector<vi> &t, int n, int depth){
	if(depth == t.size()) return (n == 0);
	rep(i, t[0].size()){
		if(dfs(t, (t[depth][i] ^ n), depth+1)) return true;
	}
	return false;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(nullptr);
	//cout << fixed << setprecision(6);
	int n, k;
	cin >> n >> k;
	vector<vi> t(n, vi(k));
	rep(i, n) rep(j, k) cin >> t[i][j];

	bool ans = dfs(t, 0, 0);

	cout << (ans ? "Found" : "Nothing") << endl;
	return 0;
}