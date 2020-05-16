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
	int x;
	cin >> x;

	for(int i = -118; i <= 119; i++){
		for(int j = -119; j <= 118; j++){
			int res = pow(i, 5) - pow(j, 5);
			if(res == x){
				printf("%d %d\n", i, j);
				return 0;
			}
		}
	}
	return 0;
}