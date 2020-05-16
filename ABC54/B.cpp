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
	int n, m;
	cin >> n >> m;
	vector<string> a(n), b(m);
	rep(i, n) cin >> a[i];
	rep(i, m) cin >> b[i];

	for(int y = 0; y < n-m; y++){
		bool res = true;
		for(int x = 0; x < n-m; x++){
			for(int t = 0; t < m; t++){
				string tmp = a[y+t].substr(x, m);
				if(tmp != b[y+t]) res = false;
				// if(tmp == b[y+t])
				// 	fprintf(stderr,"\t%s\n", tmp.c_str());
			}
		}
		if(res){
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
	return 0;
}