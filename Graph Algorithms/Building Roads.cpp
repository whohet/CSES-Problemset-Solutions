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
//SIMPLE CONNECTED COMPENENTS QUESTION
bitset<100005>vis;

void dfs(int source, vector<int> *v)
{
    vis[source] = 1;
    for (int child : v[source])
    {
        if (vis[child] == 0)
            dfs(child, v);
    }
}

void solve()
{
    vis.reset();
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
    vector<int> cities;
    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == 0)
        {
            cities.pb(i);
            dfs(i, v);
        }
    }
    cout << cities.size() - 1 << endl;
    for (int i = 0; i < cities.size() - 1; i++)
    {
        cout << cities[0] << " " << cities[i + 1] << endl;
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

