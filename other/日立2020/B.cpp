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

#define rep(i,n) for(int i=0; i<(n); ++i)
#define all(n) n.begin(),n.end()

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

#define DEBUG

struct waribiki
{
	int x, y, c;
};

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int A, B, M;
	cin >> A >> B >> M;
	vi a(A), b(B);
	rep(i, A) cin >> a[i];
	rep(i, B) cin >> b[i];
	vector<waribiki> w(M);
	rep(i, M)
		cin >> w[i].x >> w[i].y >> w[i].c;

	int ans = INF;
	rep(i, M)
	{
		chmin(ans, a[w[i].x-1] + b[w[i].y-1] - w[i].c);
	}
	sort(all(a)); sort(all(b));
	chmin(ans, a[0] + b[0]);
	cout << ans << endl;
	return 0;
}