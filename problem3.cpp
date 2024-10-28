#include<bits/stdc++.h>
using namespace std;


int main()
{
    int m,n,i,k,ans;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cin>>m;
    sort(a,a+n);
    while(m--)
    {
        cin>>k;
        ans=upper_bound(a,a+n, k)-a;
        cout<<ans<<endl;
    }
return 0;
}