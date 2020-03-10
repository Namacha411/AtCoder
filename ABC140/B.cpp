#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
typedef unsigned long long ll;
#define rep(i, n) for(int i = 0; i < (n); i++)

//#define DEBUG

int main()
{
	vector<int> va,vb,vc;
	int n, in;

	//read
	cin >> n;
	rep(i,n)
	{
		cin >> in;
		va.push_back(in);
	}
	rep(i,n)
	{
		cin >> in;
		vb.push_back(in);
	}
	rep(i,n-1)
	{
		cin >> in;
		vc.push_back(in);
	}

	//solve
	int sum = 0;
	rep(i,n)
	{
		sum += vb[i];
	}
	#ifdef DEBUG
		cout << "sum = " << sum << endl;
	#endif

	rep(i,n-1)
	{
		if(va[i] == (va[i+1] - 1))
		{
			sum += vc[va[i] - 1];
		#ifdef DEBUG
			cout << "vc[" << i << "] = " << vc[i] << endl;
		#endif
		}
	}

	cout << sum << endl;

	return 0;
}