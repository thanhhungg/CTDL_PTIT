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
		int n;
		cin >> n;
		int cnt = n - 1;
		vector<int> a(n);
		stack<vector<int>> st;
		for (int i = 0; i < n; i++)
        {
			cin >> a[i];
        }
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (a[i] > a[j])
					swap(a[i], a[j]);
			}
			st.push(a);
		}
		while (st.size())
		{
			a = st.top();
			st.pop();
			cout << "Buoc " << cnt-- << ": ";
			for (int j = 0; j < n; j++)
				cout << a[j] << " ";
			cout << endl;
		}
	}
}