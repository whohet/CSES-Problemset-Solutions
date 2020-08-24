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
	int n, x, y;
	cin >> n;
	vector<pair<int, bool>> arr;
	cin >> n;
	while (n--)
	{
		cin >> x >> y;
		arr.push_back(make_pair(x, true));
		arr.push_back(make_pair(y, false));
	}
	sort(arr.begin(), arr.end());
	int curr_people = 0, max_people = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		curr_people += arr[i].second ? 1 : -1;
		max_people = max(max_people, curr_people);
	}
	cout << max_people;;
	//cout << "\n\n"<<"Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " seconds.\n";
	return 0;
}