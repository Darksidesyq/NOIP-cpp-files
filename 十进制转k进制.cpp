#include<bits/stdc++.h>
using namespace std;
char a[1000];
int main()
{
    int y=0,k,n,x;
    char z='A';
    scanf ("%d %d",&n,&x);
    while (n!=0)
    {
        y++;
        a[y]=n%x;
        n=n/x;
        if (a[y]>9)
            a[y]=z+(a[y]-10);
        else
            a[y]=a[y]+'0';
    }
    for (int i=y;i>0;i--)
        printf ("%c",a[i]);
    return 0;
}
