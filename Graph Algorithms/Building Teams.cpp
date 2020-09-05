#include<bits/stdc++.h>
#define fasterthanlight ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define pb push_back
using namespace std;

//author::@whohet-->Het Patel

//SIMPLE BIPARTITE CHECK

int vis[100005]; int ans = 1;

void dfs(int src, int color, vector<int> *v, int parent)
{
	vis[src] = color;
	for (int child : v[src])
	{
		if (vis[child] == 0)
		{
			dfs(child, 3 - color, v, src);
		}
		else if (child == parent)
		{
			continue;
		}
		else if (color == vis[child])
		{
			ans = 0;
		}
	}
}

void solve()
{
	int n, m;
	cin >> n >> m;
	vector<int> v[n + 1];
	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		v[a].pb(b);
		v[b].pb(a);
	}
	for (int i = 1; i <= n; i++)
	{
		if (vis[i] == 0)
		{
			dfs(i, 1, v, -1);
		}
	}
	if (ans == 0)
	{
		cout << "IMPOSSIBLE\n";
	}
	else
	{
		for (int i = 1; i <= n; i++)
			cout << vis[i] << " ";
	}

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