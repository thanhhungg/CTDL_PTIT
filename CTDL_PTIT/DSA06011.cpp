#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define MAX 1e7
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n,ans=MAX;
        cin>>n;
        ll a[n];
        for(int i = 0; i < n; i++)
        {
            cin>> a[i];
        }
        for(int i = 0; i < n - 1; i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(abs(a[i]+a[j])<abs(ans))
                {
                    ans=a[i]+a[j];
                }
            }
        }
        cout<<ans<< endl;
    }
    return 0;
}
