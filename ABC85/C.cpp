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
	int n, y;
	cin >> n >> y;
	if(y == 45000) cerr << "y == 45000" << endl;

	rep(i, 2000+1)
	{
		rep(j, 2000+1){
			if(i + j > n) break;
			int k = n - i - j;
			int sum = 10000*i + 5000*j + 1000*k;
			if(sum == y){
				printf("%d %d %d\n", i, j, k);
				return 0;
			}
		}
	}
	printf("-1 -1 -1\n");
	return 0;
}