#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n, x, s = 0;
		cin >> n;
		pair<int, int> k;
		map<int, int> m;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			m[x]++;
		}
		for (auto i : m)
		{
			if (i.second > s)
			{
				s = i.second;
				k = i;
			}
		}
		if (k.second > (float)n / 2)
			cout << k.first << endl;
		else
			cout << "NO" << endl;
	}
}