#include<bits/stdc++.h>
using namespace std;
int ks[100005],js[100005],f[100005],N,K;//神奇的变量名模仿某人的。。。
int main(){
   //freopen("std.in","r",stdin);
    scanf("%d%d",&N,&K);
    for(int i=1;i<=K;i++){
        int a,b;
        scanf("%d%d",&a,&b);
        ks[i]=a;
        js[i]=b;
    }
    int point=K;
    for(int i=N;i>=1;i--){
        if(ks[point]!=i)
            f[i]=f[i+1]+1;
        else{
            while(i==ks[point]){
                f[i]=max(f[i],f[i+js[point]]);
                point--;
            }
        }
    }
    printf("%d\n",f[1]);
    return 0;
}
