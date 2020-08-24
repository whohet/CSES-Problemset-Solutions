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
	int n;
	cin >> n;
	int max;
	cin >> max;
	int ans = 0;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);
	multiset<int>ms;
	for (int i = n - 1; i >= 0; i--)
	{
		auto ix = ms.begin();
		if (ix != ms.end())
		{
			if (*ix + arr[i] <= max)
			{
				ms.erase(ix);
				ans++;
			}
			else
			{
				ms.insert(arr[i]);
			}
		}
		else
		{
			ms.insert(arr[i]);
		}
	}
	cout << ans + ms.size() ;

	//cout << "\n\n"<<"Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " seconds.\n";
	return 0;
}