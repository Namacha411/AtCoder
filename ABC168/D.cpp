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

void debug(vector<vi> g){
	for(auto t : g){
		for(int u : t){
			cerr << u << " ";
		}
		cerr << endl;
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(nullptr);
	//cout << fixed << setprecision(6);
	int n, m;
	cin >> n >> m;
	vector<vi> G(n, vi(n, 0));
	rep(i, m){
		int a,b;
		cin >> a >> b;
		a--; b--;
		G[a][b] = G[b][a] = 1;
	}

	debug(G);
	bool ans = true;
	vi s;
	for(int i = 1; i < n; i++){
		if(G[i][0] == 0) ans = false;
	}
	return 0;
}