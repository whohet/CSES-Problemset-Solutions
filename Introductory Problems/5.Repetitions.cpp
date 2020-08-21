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

	string s;
	cin >> s;
	int n = s.length();
	int mx = -1, ans = 1;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == s[i + 1])
			ans++;
		else
		{
			mx = max(mx, ans);
			ans = 1;
		}
	}
	mx = max(mx, ans);
	cout << mx;

	//cout << "\n\n"<<"Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " seconds.\n";
	return 0;
}