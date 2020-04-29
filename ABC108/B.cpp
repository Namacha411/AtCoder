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

struct Pos{
	int x, y;
};

int main()
{
	ios::sync_with_stdio(false); cin.tie(nullptr);
	//cout << fixed << setprecision(6);
	vector<Pos> p(2);
	rep(i, 2) cin >> p[i].x >> p[i].y;

	int x = p[1].x - p[0].x;
	int y = p[1].y - p[0].y;

	printf("%d %d %d %d\n", p[1].x-y, p[1].y+x, p[0].x-y, p[0].y+x);
	return 0;
}