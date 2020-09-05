#include<bits/stdc++.h>
#define fasterthanlight ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define pb push_back
using namespace std;

//author::@whohet-->Het Patel
//SINGLE SOURCE SHORTEST PATH USING BFS QUESTION
bitset<100005>vis;

void bfs(int s, vector<int> *v, int n, int *d)
{
    int par[n + 1] = {};
    par[1] = -1;
    queue<int>q;
    q.push(s);
    vis[s] = 1;
    while (!q.empty())
    {
        int src = q.front();
        q.pop();
        for (int child : v[src])
        {
            if (vis[child] == 0)
            {
                q.push(child);
                vis[child] = 1;
                d[child] = d[src] + 1;
                par[child] = src;
            }
        }
    }
    if (d[n] == 0)
    {
        cout << "IMPOSSIBLE\n";
        return;
    }
    cout << d[n] + 1 << endl;
    stack<int>st;
    int x = n;
    st.push(n);
    while (x != 1)
    {
        x = par[x];
        st.push(x);
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
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
    int d[n + 1] = {};
    bfs(1, v, n, d);

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





