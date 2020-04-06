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

int main() {
	ios::sync_with_stdio(false); cin.tie(nullptr);
	//cout << fixed << setprecision(6);
	int n, x, y;
	cin >> n >> x >> y;
	x--;
	y--;

	bool G[n][n];
	rep(i, n) rep(j, n) G[i][j] = false;
	rep(i, n - 1){
		G[i][i + 1] = true;
		G[i + 1][i] = true;
	}
	G[x][y] = true;
	G[y][x] = true;
	{
		rep(i, n){
			rep(j, n){
				cerr << (G[i][j] ? 1 : 0);
			}
			cerr << endl;
		}
	}
	rep(k, n-1){
		int ans = n - k;
		cout << ans << endl;
	}
	return 0;
}