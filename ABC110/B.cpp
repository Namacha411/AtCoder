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

int main()
{
	ios::sync_with_stdio(false); cin.tie(nullptr);
	//cout << fixed << setprecision(6);
	int n, m, X, Y;
	cin >> n >> m >> X >> Y;
	vi x(n), y(n);
	rep(i, n) cin >> x[i];
	rep(i, m) cin >> y[i];

	sort(all(x));
	reverse(all(x));
	sort(all(y));
	int xmax = x[0];
	int ymin = y[0];
	bool beginWar = true;
	rep(i, 100)
	{
		if((xmax < i && ymin >= i) && (X < i && i <= Y))
			beginWar = false;
	}

	cout << (beginWar ? "War" : "No War") << endl;
	return 0;
}