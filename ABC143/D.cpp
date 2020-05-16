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
const ld PI = acos(-1);

#define rep(i,n) for(int i=0; i<(n); ++i)
#define all(n) n.begin(),n.end()

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

#define DEBUG

int main()
{
	ios::sync_with_stdio(false); cin.tie(nullptr);
	//cout << fixed << setprecision(6);
	int n;
	cin >> n;
	vi l(n);
	rep(i, n) cin >> l[i];

	int ans = 0;
	sort(all(l));
	reverse(all(l));
	int l1 = l[0];
	int l2 = l[1];
	for(int i = 2; i < l.size(); i++){
		if(l1 < (l2 + l[i])) ans++;
		fprintf(stderr,"\t%d %d %d\n", l1, l2, l[i]);
	}

	cout << ans << endl;
	return 0;
}