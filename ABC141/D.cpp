#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;

#define INF (int)(1e9)

#define rep(i, n) for (int i = 0; i < (n); ++i)
#define REP(i, start, end) for (int i = (start); i <= (end); ++i)
#define all(n) begin(n), end(n)

#define DEBUG

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	vi a(n);
	rep(i, n) cin >> a[i];

	priority_queue<int> pq;
	rep(i, n) pq.push(a[i]);

	int t;
	while (true)
	{
		if (m == 0) break;
		t = floor(pq.top() / 2);
		pq.pop();
		--m;
		pq.push(t);
	}

	ll sum = 0;
	rep(i,n)
	{
		sum += pq.top();
		pq.pop();
	}
	cout << sum << endl;
	return 0;
}