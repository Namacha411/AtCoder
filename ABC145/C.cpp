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

int fact(int n){
	if(n == 0) return 1;
	return n * fact(n-1);
}

int main() {
	ios::sync_with_stdio(false); cin.tie(nullptr);
	cout << fixed << setprecision(10);
	int n;
	cin >> n;
	vector<ld> x(n), y(n);
	rep(i, n) cin >> x[i] >> y[i];

	vi p(n);
	rep(i, n) p[i] = i;
	vector<ld> dist(fact(n), 0);
	rep(i, fact(n)){
		rep(j, n - 1){
			dist[i] += sqrt(pow(x[p[j]]-x[p[j+1]], 2) + pow(y[p[j]]-y[p[j+1]], 2));
		}
		next_permutation(all(p));
	}
	ld ans = 0;
	rep(i, fact(n)){
		ans += dist[i];
	}

	cout << ans / fact(n) << endl;
	return 0;
}