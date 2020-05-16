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

int main() {
	ios::sync_with_stdio(false); cin.tie(nullptr);
	//cout << fixed << setprecision(6);
	int h, w;
	cin >> h >> w;
	vector<string> s(h);
	rep(i, h) cin >> s[i];

	const int dx[] = {0, 1, 0, -1};
	const int dy[] = {1, 0, -1, 0};
	rep(i, h) rep(j, w){
		if(s[i][j] == '.') continue;
		bool can = false;
		rep(d, 4){
			int x = j + dx[d];
			int y = i + dy[d];
			if(x < 0 || x >= w) continue;
			if(y < 0 || y >= h) continue;
			if(s[y][x] == '.') continue;
			can = true;
		}
		if(!can){
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}