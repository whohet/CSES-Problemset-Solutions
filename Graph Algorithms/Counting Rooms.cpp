#include<bits/stdc++.h>
#define fasterthanlight ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
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
//SIMPLE CHECKING OF CONNECTED COMPONENTS IN IMPLICT GRAPH QUESTION
string arr[1005]; bool vis[1005][1005];
int dx[] = { -1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};
void dfs(int i, int j, int n, int m)
{
	vis[i][j] = true;
	for (int k = 0; k < 4; k++)
	{
		if (j + dy[k] >= m || i + dx[k] >= n || i + dx[k] < 0 || j + dy[k] < 0)
			continue;
		if (vis[i + dx[k]][j + dy[k]] == false && arr[i + dx[k]][j + dy[k]] == '.')
			dfs(i + dx[k], j + dy[k], n, m);
	}
}

void solve()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (vis[i][j] == false && arr[i][j] == '.')
			{
				dfs(i, j, n, m);
				ans++;
			}
		}
	}
	cout << ans << endl;
}

signed main()
{
	fasterthanlight;
	int T; T = 1;
	//cin>>T;
	while (T--)
	{
		solve();
	}

	//cout << "\n\n"<<"Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " seconds.\n";
	return 0;
}