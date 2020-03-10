#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using vi = vector<int>;
using vll = vector<ll>;
using P = pair<int, int>;
using Graph = vector<vi>;

const int INF = 1e9;
const ll INFLL = 1e18;
const int MOD = 1e9 + 7;
const int NIL = -1;
const ld PI = acos(-1);

#define rep(i,n) for(int i=0; i<(n); ++i)
#define all(n) n.begin(),n.end()

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

#define DEBUG

vector<bool> seen;
void dfs(int v, Graph &G, int &n)
{
	seen[v] = true;
	rep(v2, n)
	{
		if(G[v][v2] == false) continue;
		if(seen[v2] == true) continue;
		dfs(v2, G, n);
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(nullptr);
	//cout << fixed << setprecision(6);
	int n, m;
	cin >> n >> m;
	vector<vector<int>> G(n);
	seen.resize(n, false);

	rep(i, m)
	{
		int a, b;
		cin >> a >> b;
		G[a].push_back(b);
		G[b].push_back(a);
	}

	int ans = 0;
	rep(i, m)
	{
		if(G[i].size() == 1
			|| G[i].size() == 2)
			ans++;
	}
	cout << ans << endl;
	return 0;
}