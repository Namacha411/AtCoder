#include <bits/stdc++.h>
#include <stdarg.h>
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
	int n, m;
	cin >> n >> m;
	vi x(m);
	rep(i, m) cin >> x[i];

	if(n >= m){ cout << 0 << endl; return 0; }

	sort(all(x));
	vi l;
	rep(i, m-1) l.push_back(x[i+1]-x[i]);
	sort(all(l));
	reverse(all(l));
	ll dontVisit = 0;
	rep(i, n-1) dontVisit += l[i];
	ll ans = x.back() - x.front() - dontVisit;

	rep(i, l.size()) cerr << l[i] << ' ';
	cerr << endl;

	fprintf(
		stderr,
		"x.back: %d\nx.front: %d\ndon't visit: %lld\n",
		x.back(), x.front(), dontVisit
		);
	cout << ans << endl;
	return 0;
}