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
const ld PI = acos(-1);

#define rep(i,n) for(int i=0; i<(n); ++i)
#define all(n) n.begin(),n.end()

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int gcd(int a, int b)
{
	if (a < b) return gcd(b, a);
	int r;
	while ((r = a % b)){ a = b; b = r; }
	return b;
}

void find_max_gcd(queue<int> &q)
{
	while(q.size() != 1)
	{
		int q1 = q.front(); q.pop();
		int q2 = q.front(); q.pop();
		q.push(gcd(q1, q2));
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(nullptr);
	//cout << fixed << setprecision(6);
	int n; cin >> n;
	vi a(n);
	rep(i, n) cin >> a[i];

	queue<int> q;
	rep(i, n) q.push(a[i]);

	cout << q.front() << endl;
	return 0;
}