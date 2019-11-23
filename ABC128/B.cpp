#include<bits/stdc++.h>
using namespace std;

typedef signed long long ll;
typedef long double ld;

#define rep(i,n) for(int i = 0; i < (n); i++)
#define all(x) x.begin(),x.end()

#define DEBUG

struct book
{
	string s;
	int p;

	book(string str, int point)
	{
		s = str;
		p = point;
	}
};


bool tmp(book a, book b)
{
	for(int i = 0; i < min(a.s.size(), b.s.size()); i++)
	{
		
	}
}
int main()
{
	int n;
	vector<book> b;

	string S; int P;
	cin >> n;
	rep(i, n)
	{
		cin >> S >> P;
		b.push_back(book(S, P));
	}


	return 0;
}
