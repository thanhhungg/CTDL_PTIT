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
        int a[n];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        int i = n - 1;
        while (a[i] > a[i + 1] && i > 0)
        {
            i--;
        }
        if (i == 0)
        {
            for (int j = 1; j <= n; j++)
            {
                a[j] = j;
            }
        }
        else
        {
            int x = n;
            while (a[i] > a[x] && x > 0)
            {
                x--;
            }
            swap(a[i], a[x]);
            int l = i + 1, r = n;
            while (l < r)
            {
                swap(a[l], a[r]);
                l++;
                r--;
            }
        }
        for (int j = 1; j <= n; j++)
            cout << a[j] << " ";
        cout << endl;
    }
    return 0;
}
