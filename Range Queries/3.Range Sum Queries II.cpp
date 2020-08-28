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
void buildTree(int *tree, int *arr, int s, int e, int index)
{
	if (s == e)
	{
		tree[index] = arr[s];
		return;
	}
	int mid = (s + e) / 2;
	buildTree(tree, arr, s, mid, 2 * index);
	buildTree(tree, arr, mid + 1, e, 2 * index + 1);
	tree[index] = (tree[2 * index] + tree[2 * index + 1]);
	return;
}
void update(int *tree, int ss, int se, int i, int v, int index)
{
	if (ss > i || se < i)
	{
		return ;
	}
	if (ss == se )
	{
		tree[index] = v;
		return;
	}
	int mid = (ss + se) / 2;
	update(tree, ss, mid, i, v, 2 * index);
	update(tree, mid + 1, se, i, v, 2 * index + 1);
	tree[index] = (tree[2 * index] + tree[2 * index + 1]);
	return;
}
int query(int *tree, int ss, int se, int a, int b, int index)
{
	if (ss > b || se < a)
	{
		return 0;
	}
	if (ss >= a && se <= b)
	{
		return tree[index];
	}
	int mid = (ss + se) / 2;
	int left = query(tree, ss, mid, a, b, 2 * index);
	int right = query(tree, mid + 1, se, a, b, 2 * index + 1);
	return (left + right);
}

signed main()
{
	fasterthanlight;
	int n, q;
	cin >> n >> q;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int *tree = new int[4 * n + 1];
	buildTree(tree, arr, 0, n - 1, 1);
	while (q--)
	{
		int a, b, c;
		cin >> c >> a >> b;
		if (c == 2)
			cout << query(tree, 0, n - 1, a - 1, b - 1, 1) << endl;
		else
			update(tree, 0, n - 1, a - 1, b, 1);
	}
	//cout << "\n\n"<<"Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " seconds.\n";
	return 0;
}