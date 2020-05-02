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

struct In{
	int a, b, c, d;
};

int ans = 0;
vi A;
void dfs(int &m, int &n, int depth, vector<In> &in, int &q){
	if(depth == n+1){
		int res = 0;
		for(int i = 0; i < q; i++){
			if(A[in[i].b] - A[in[i].a] != in[i].c) continue;
			res += in[i].d;
		}
		ans = max(ans, res);
		return;
	}
	for(int i = 1; i <= m; i++){
		if(A[depth-1] > i) continue;
		A[depth] = i;
		dfs(m, n, depth+1, in, q);
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(nullptr);
	//cout << fixed << setprecision(6);
	int n, m, q;
	cin >> n >> m >> q;
	vector<In> in(q);
	vi c(q), d(q);
	rep(i, q)
		cin >> in[i].a >> in[i].b >> in[i].c >> in[i].d;

	A.resize(n+1, 1);
	dfs(m, n, 1, in, q);

	cout << ans << endl;
	return 0;
}