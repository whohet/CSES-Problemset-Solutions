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
	int n, m, k;
	cin >> n >> m >> k;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);
	multiset<int>siz;
	for (int i = 0; i < m; i++)
	{
		int a;
		cin >> a;
		siz.insert(a);
	}
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		auto it = siz.lower_bound(arr[i] - k);
		if (it != siz.end() && abs(*it - arr[i]) <= k)
		{
			ans++;
			siz.erase(it);
		}
	}
	cout << ans;

	//cout << "\n\n"<<"Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " seconds.\n";
	return 0;
}