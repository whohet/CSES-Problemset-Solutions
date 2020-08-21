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

	test
	{
		int x, y;
		cin >> x >> y;
		int z = max(x, y);
		if (z & 1)
		{
			cout << (z * z) - (z - y) - abs(1 - x);
		}
		else
		{
			cout << (z * z) - (z - x) - abs(1 - y);
		}
		cout << endl;
	}

	//cout << "\n\n"<<"Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " seconds.\n";
	return 0;
}