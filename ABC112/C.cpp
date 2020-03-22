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

struct Pos
{
	ll x = -1;
	ll y = -1;
	ll h = -1;
};

int main()
{
	ios::sync_with_stdio(false); cin.tie(nullptr);
	//cout << fixed << setprecision(6);
	ll n; cin >> n;
	vector<Pos> p(n+1);
	for(int i = 1; i <= n; i++)
		cin >> p[i].x >> p[i].y >> p[i].h;

	Pos G;
	rep(i, n)
		if(p[i].h >= 1)
			G = p[i];

	Pos ans;
	for(int cx = 0; cx <= 100; cx++)
	{
		for(int cy = 0; cy <= 100; cy++)
		{
			ll v1 = G.h + abs(cx - G.x) + abs(cy - G.y);
			bool flg = true;
			for(int i = 1; i <= n; i++)
			{
				ll v2 = max(v1 - abs(cx - p[i].x) - abs(cy - p[i].y), 0LL);
				if(p[i].h != v2) flg = false;
			}
			if(flg)
			{
				ans.x = cx;
				ans.y = cy;
				ans.h = v1;
			}
		}
	}

	printf("%lld %lld %lld\n", ans.x, ans.y, ans.h);
	return 0;
}
