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
	//total xor from 1 to n
	int total_xor;
	int rem = n % 4;
	if (rem == 0)
		total_xor = n;
	else if (rem == 1)
		total_xor = 1;
	else if (rem == 2)
		total_xor = n + 1;
	else //rem==3
		total_xor = 0;
	int a;
	//xor of two same numbers is 0, hence for xors,it would be the missing number
	for (int i = 0; i < n - 1; i++)
	{
		cin >> a;
		total_xor = (total_xor ^ a);
	}
	cout << total_xor << endl;

	//cout << "\n\n"<<"Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " seconds.\n";
	return 0;
}