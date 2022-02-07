#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
    //cách 1:
        // int n,k,a[1000],b[1000];
        // cin>>n>>k;
        // for(int i=0;i<n;i++)
        // {
        //     cin>>a[i];
        //     b[i]=abs(k-a[i]);
        // }
        // for(int i=0;i<n-1;i++)
        // {
        //     for(int j=i+1;j<n;j++)
        //     {
        //         if(b[i]>b[j]) 
        //         {
        //             swap(a[i],a[j]);
        //             swap(b[i],b[j]);
        //         }
        //     }
        // }
        // for(int i=0;i<n;i++)
        // {
        //     cout<<a[i]<<" ";
        // }
        // cout<<endl;
    //cách 2:
        int n,k;
        cin>>n>>k;
        pair<int ,int > a[100];
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a[i]={x,abs(k-x)};
        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i].second>a[j].second) swap(a[i],a[j]);
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<a[i].first<<" ";
        }
        cout<<endl;

    }
}