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
	int n, k;
	cin >> n >> k;
	vector<vector<int>> a(k);
	rep(i, k){
		int d;
		cin >> d;
		vi A(d);
		rep(j, d) cin >> A[j];
		a[i] = A;
	}

	vi sunuke(n, 0);
	rep(i, k){
		for(auto t : a[i]){
			sunuke[t-1]++;
		}
	}
	int ans = 0;
	rep(i, n){
		if(sunuke[i] == 0) ans++;
	}

	cout << ans << endl;
	return 0;
}