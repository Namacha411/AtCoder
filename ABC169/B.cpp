#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;

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
	int n;cin >> n;
	vll a(n);
	rep(i, n) cin >> a[i];

	cpp_int ans = 1;
	sort(all(a));
	if(a[0] == 0){ cout << 0 << endl; return 0; }
	else {
		for(cpp_int t : a){
			ans *= t;
			if(ans > INFLL){
				cout << -1 << endl;
				return 0;
			}
		}
	}

	cout << ans << endl;
	return 0;
}