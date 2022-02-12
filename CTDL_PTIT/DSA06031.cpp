#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n+5];
        for(int i= 1; i <= n; i++)
        {
            cin>>a[i];
        }
        for(int i= 1; i <=n-k+1;i++)
        {
            int j=i;
            set<int>s;
            while(j<k+i)
            {
                s.insert(a[j]);
                j++;
            }
            cout<<*--s.end()<<" ";
        }
        cout<<endl;
    }
}