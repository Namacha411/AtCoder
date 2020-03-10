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

struct result
{
	int d, v, x;
};

void output(vector<int> a)
{
	cout << a[0];
	for(int i = 1; i < 6; i++)
		cout << ' ' << a[i];
	cout << endl;
}

unsigned int randInt() {
    static unsigned int tx = 314159265, ty=362436069, tz=521288629, tw=88675123;
    unsigned int tt = (tx^(tx<<11));
    tx = ty; ty = tz; tz = tw;
    return ( tw=(tw^(tw>>19))^(tt^(tt>>8)) );
}

void change(vector<int> &s, int n, int c) { s[n] = c; }

void solve(vector<int> &f, vector<int> &s, int i)
{
	if(i > 5) i -= 6;
	change(s, i, 6 - i);
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int n, m;
	cin >> n >> m;

	vector<int> feild(n+1, NIL);
	result res;

	vi dice(6);
	rep(i, 6) dice[i] = i + 1;

	int change = 0;
	rep(i, m)
	{
		solve(feild, dice, i);
		output(dice);
		cin >> res.d >> res.v >> res.x;
		feild[res.x] = res.v;
	}
	return 0;
}