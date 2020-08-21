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
	if (n == 2 || n == 3)
	{
		cout << "NO SOLUTION";
		return 0;
	}
	for (int i = 2; i <= n; i += 2)
	{
		cout << i << " ";
	}
	for (int i = 1; i <= n; i += 2)
	{
		cout << i << " ";
	}


	//cout << "\n\n"<<"Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " seconds.\n";
	return 0;
}