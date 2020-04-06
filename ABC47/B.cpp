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

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

struct Input{
	int x, y, a;
};

int main() {
	ios::sync_with_stdio(false); cin.tie(nullptr);
	//cout << fixed << setprecision(6);
	int w, h, n;
	cin >> w >> h >> n;
	vector<Input> in(n);
	rep(i, n)
		cin >> in[i].x >> in[i].y >> in[i].a;

	int up = h;
	int down = 0;
	int right = w;
	int left = 0;
	rep(i, n){
		if(in[i].a == 1){
			left = max(left, in[i].x);
		}
		else if(in[i].a == 2){
			right = min(right, in[i].x);
		}
		else if(in[i].a == 3){
			down = max(down, in[i].y);
		}else if(in[i].a == 4){
			up = min(up, in[i].y);
		}
	}
	int y = up - down;
	int x = right - left;
	bool flg = true;
	if(y < 0 || x < 0) flg = false;
	int s = x * y;

	cout << (flg ? s : 0) << endl;
	return 0;
}