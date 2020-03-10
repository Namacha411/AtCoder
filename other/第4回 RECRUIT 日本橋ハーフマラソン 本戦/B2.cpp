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

#define rep(i,n) for(int i=0; i<(n); ++i)
#define all(n) n.begin(),n.end()

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

#define DEBUG

unsigned int randInt() {
    static unsigned int tx = 523456789, ty=362436069, tz=521288629, tw=88675123;
    unsigned int tt = (tx^(tx<<11));
    tx = ty; ty = tz; tz = tw;
    return ( tw=(tw^(tw>>19))^(tt^(tt>>8)) );
}

const char TBL[] = {'U', 'D', 'L', 'R'};

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int n, p, m;
	cin >> n >> p >> m;
	vector<string> row(n), sheets(n);
	rep(i, n) cin >> row[i];
	rep(i, n) cin >> sheets[i];

	rep(i, m)
	{
		int r = randInt() % 4;
		cout << TBL[r] << endl;
	}
	return 0;
}