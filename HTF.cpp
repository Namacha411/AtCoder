#include <bits/stdc++.h>
using namespace std;

typedef signed long long ll;
typedef long double ld;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) x.begin(), x.end()

#define DEBUG

int main()
{
	//input
	int n, m, b;
	int gx, gy;
	cin >> n >> m >> b;
	vector<int> ry(m), rx(m);
	vector<char> c(m);
	rep(i, m)
	{
		cin >> ry[i] >> rx[i] >> c[i];
	}
	vector<int> by(b), bx(b);
	rep(j, b)
	{
		cin >> by[j] >> bx[j];
	}

	//solve
	double save;
	int k = 40 * 40;
	//vector<int> y(k), x(k);
	//vector<char> r(k);
	//vector<vector<char>> data(n, vector<char>(n));
	cout << k << endl;
	rep(yPoint, n) rep(xPoint, n)
	{
		if ((gx - xPoint) == 0 && yPoint < gy)
		{
			cout << yPoint << ' ' << xPoint << ' ' << 'D' << endl;
			continue;
		}
		else if ((gx - xPoint) == 0 && yPoint > gy)
		{
			cout << yPoint << ' ' << xPoint << ' ' << 'U' << endl;
			continue;
		}
		else if ((gy - yPoint) == 0 && xPoint > gx)
		{
			cout << yPoint << ' ' << xPoint << ' ' << 'L' << endl;
			continue;
		}
		else if ((gy - yPoint) == 0 && xPoint < gx)
		{
			cout << yPoint << ' ' << xPoint << ' ' << 'R' << endl;
			continue;
		}

		save = (double)((double)gy - (double)yPoint) / (double)((double)gx - (double)xPoint);
		if (save > 1 && yPoint < gy && xPoint > gx)
		{
			cout << yPoint << ' ' << xPoint << ' ' << 'D' << endl;
			continue;
		}
		else if (save < 1 && yPoint < gy && xPoint > gx)
		{
			cout << yPoint << ' ' << xPoint << ' ' << 'L' << endl;
			continue;
		}
		else if(save > 1 && yPoint > gy && xPoint < gx)
		{
			cout << yPoint << ' ' << xPoint << ' ' << 'U' << endl;
			continue;
		}
		else if(save < 1 && yPoint > gy && xPoint < gx)
		{
			cout << yPoint << ' ' << xPoint << ' ' << 'R' << endl;
			continue;
		}
		//
		if (save > -1 && yPoint < gy && xPoint < gx)
		{
			cout << yPoint << ' ' << xPoint << ' ' << 'D' << endl;
			continue;
		}
		else if (save > -1 && yPoint > gy && xPoint > gx)
		{
			cout << yPoint << ' ' << xPoint << ' ' << 'L' << endl;
			continue;
		}
		else if(save < -1 && yPoint > gy && xPoint < gx)
		{
			cout << yPoint << ' ' << xPoint << ' ' << 'U' << endl;
			continue;
		}
		else if(save < -1 && yPoint > gy && xPoint < gx)
		{
			cout << yPoint << ' ' << xPoint << ' ' << 'R' << endl;
			continue;
		}
	}
	return 0;
}
