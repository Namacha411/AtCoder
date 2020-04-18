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
	int n; cin >> n;
	vi a(n);
	rep(i, n) cin >> a[i];

	int bugs = 0;
	int soft = 0;
	rep(i, n){
		if(a[i] == 0) continue;
		bugs += a[i];
		soft++;
	}

	cout << (bugs + soft - 1) / soft << endl;
	return 0;
}