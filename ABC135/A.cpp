#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
typedef unsigned long long ll;
#define rep(i, n) for(int i = 0; i < (n); i++)

class Solve
{
	public:

		ll a, b, ans;

		void input()
		{
			cin >> a >> b;
		}

		void solve()
		{
			if(a % 2 != b % 2)
			{
				cout << "IMPOSSIBLE" << endl;
			}
			else
			{
				ans = (a + b) / 2;
				cout << ans << endl;
			}
			
		}

		void output()
		{
        }
};

Solve s;
int main()
{
    s.input();
	s.solve();
	s.output();
	return 0;
}
