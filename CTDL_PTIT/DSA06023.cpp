#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,a[100];
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for(int i = 0; i < n - 1; i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j]) swap(a[i],a[j]);
        }
        cout<<"Buoc "<<i+1<<": ";
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<< endl;
    }
    return 0;
}
