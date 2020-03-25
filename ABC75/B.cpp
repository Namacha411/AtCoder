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

#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(n) n.begin(), n.end()

template <class T>
bool chmax(T &a, const T &b){if(a<b){a=b;return 1;}return 0;}
template <class T>
bool chmin(T &a, const T &b){if(b<a){a=b;return 1;}return 0;}

const int dx[] = {1, 1, 1, 0, -1, -1, -1, 0};
const int dy[] = {1, 0, -1, -1, -1, 0, 1, 1};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	//cout << fixed << setprecision(6);
	int h, w;
	cin >> h >> w;
	vector<string> s(h);
	rep(i, h) cin >> s[i];

	char ans[h][w] = {};
	rep(i, h){
		rep(j, w){
			if (s[i][j] == '#'){
				cout << '#';
				continue;
			}

			int cnt = 0;
			rep(k, 8){
				int x = j + dx[k];
				int y = i + dy[k];

				if (x < 0 || w <= x) continue;
				if (y < 0 || h <= y) continue;
				if (s[y][x] == '.') continue;
				cnt++;
			}
			cout << cnt;
		}
		cout << endl;
	}

	return 0;
}