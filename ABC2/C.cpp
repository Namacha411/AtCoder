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

struct pos{
	float x, y;
};

int main() {
	ios::sync_with_stdio(false); cin.tie(nullptr);
	cout << fixed << setprecision(6);
	vector<pos> p(3);
	rep(i, 3) cin >> p[i].x >> p[i].y;

	ld a = sqrtl(pow(p[0].x-p[1].x,2)+pow(p[0].y-p[1].y,2));
	ld b = sqrtl(pow(p[2].x-p[1].x,2)+pow(p[2].y-p[1].y,2));
	ld c = sqrtl(pow(p[0].x-p[2].x,2)+pow(p[0].y-p[2].y,2));
	ld s = (a + b + c) / 2;
	ld S = sqrt(s*(s-a)*(s-b)*(s-c));

	cout << S << endl;
	return 0;
}