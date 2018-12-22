#include<bits/stdc++.h>
using namespace std;
char article[1000];
int sum=0,length=0;
int main()
{
    gets(article);
    length=strlen(article);
    for(int i=0;i<length;i++)
    {
        if(article[i]>='0'&&article[i]<='9')
            sum++;
        if(article[i]>='A'&&article[i]<='Z')
            sum++;
        if(article[i]>='a'&&article[i]<='z')
            sum++;
    }
    cout<<sum<<endl;
    return 0;
}
