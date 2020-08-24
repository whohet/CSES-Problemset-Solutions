#include<bits/stdc++.h>
#define fasterthanlight ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define test int T; cin>>T; while(T--)
#define endl "\n"
#define int long long
#define vi vector<int>
#define pb push_back
#define mod 1000000007
#define MAX 1e9
#define MIN -1e9
#define hi "visited\n" //sasta debugging
using namespace std;

//author::@whohet-->Het Patel

signed main()
{
	fasterthanlight;
	int n, m;
	cin >> n >> m;
	multiset<int>v;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		v.insert(a);
	}
	for (int i = 0; i < m; i++)
	{
		int p;
		cin >> p;
		if (v.empty())
		{
			cout << -1 << endl; continue;
		}
		auto it = v.lower_bound(p);
		if (it == v.begin())
		{
			if (*it > p)
			{
				cout << -1 << endl; continue;
			}
			else
			{
				cout << *it << endl;
				v.erase(it);
				continue;
			}
		}

		if (it == v.end())
			it--;
		if (*it > p)
			it--;
		cout << *it << endl;
		v.erase(it);
	}
	//cout << "\n\n"<<"Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " seconds.\n";
	return 0;
}