#include<bits/stdc++.h>
using namespace std;
const int N=1111;
int s[5][5]={
    {5 ,-1,-2,-1,-3},
    {-1, 5,-3,-2,-4},
    {-2,-3,5,-2,-2},
    {-1,-2,-2,5,-1},
    {-3,-4,-2,-1,0}
};
int read(int len,string& st,int* arr){
    for(int i=0;i<len;i++)
    {
        if(st[i]=='A')  arr[i+1]=0;
        if(st[i]=='C')  arr[i+1]=1;
        if(st[i]=='G')  arr[i+1]=2;
        if(st[i]=='T')  arr[i+1]=3;
    }
}
int l1,l2,a[N],b[N],f[N][N];
string s1,s2;
int main(){
    cin >> l1 >> s1 >> l2 >> s2;
    read(l1,s1,a);
    read(l2,s2,b);
    for(int i=1;i<=l1;i++)
        for(int j=1;j<=l2;j++)
            f[i][j]=INT_MIN;
    for(int i=1;i<=l1;i++)
    {
        f[i][0]=f[i-1][0]+s[a[i]][4];
       // printf("f[%d][%d]=%d\n",i,0,f[i][0]);
    }
    for(int j=1;j<=l2;j++)
        f[0][j]=f[0][j-1]+s[b[j]][4];
    for(int i=1;i<=l1;i++)
        for(int j=1;j<=l2;j++)
        {
            f[i][j]=max(f[i][j],f[i-1][j-1]+s[a[i]][b[j]]);
            f[i][j]=max(f[i][j],f[i-1][j]+s[a[i]][4]);
            f[i][j]=max(f[i][j],f[i][j-1]+s[4][b[j]]);
        }
    cout<<f[l1][l2]<<endl;
    return 0;
}
