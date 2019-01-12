#include<bits/stdc++.h>
using namespace std;
int a[500],dp[500][500],n,ans,r=0;
int main()
{
    //freopen("lgP1063.in","r",stdin);
    cin>>n;
    int n_2=n*2,n_1=n+1;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        a[n+i]=a[i];
    }
    for(int i=2;i<=n_1;i++)
    {
        for(int l=1;l+i-1<=n_2;l++)
        {
            r=l+i-1;
            for(int k=l+1;k<r;k++)
            {
                dp[l][r]=max(dp[l][r],dp[l][k]+dp[k][r]+a[l]*a[k]*a[r]);
            }
        }
    }
    for(int i=1;i<=n;i++)
        ans=max(ans,dp[i][i+n]);
    cout<<ans;
    return 0;
}
