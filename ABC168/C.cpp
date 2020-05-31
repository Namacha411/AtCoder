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
	cout << fixed << setprecision(10);
	ld a,b,h,m;
	cin >> a >> b >> h >> m;

	ld deg = abs(h*5*6 + m*0.5 - m*6);
	ld rad = deg * PI / 180;
	ld c = a*a + b*b - 2*a*b*cos(rad);
	cerr << deg << endl;

	cout << sqrt(c) << endl;
	return 0;
}