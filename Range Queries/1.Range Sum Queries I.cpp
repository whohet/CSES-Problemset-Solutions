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
	int n, q;
	cin >> n >> q;
	int arr[n];
	int pre[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (i != 0)
			pre[i] = pre[i - 1] + arr[i];
		else
			pre[i] = arr[i];
	}
	while (q--)
	{
		int a, b;
		cin >> a >> b;
		if (a != 1)
		{
			cout << pre[b - 1] - pre[a - 2] << endl;
		}
		else
			cout << pre[b - 1] << endl;

	}

	//cout << "\n\n"<<"Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " seconds.\n";
	return 0;
}