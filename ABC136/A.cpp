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

		int a, b, c;
		int ans;

		void input()
		{
			cin >> a >> b >> c;
		}

		void solve()
		{
			ans = c - (a - b);
			if(ans < 0)
			{
				ans = 0;
			}
		}

		void output()
		{
			cout << ans << endl;
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
