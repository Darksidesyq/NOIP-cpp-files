#include<bits/stdc++.h>
using namespace std;
const int N=1e7+9;
int n=0,score=0,all_score=1,minus_score=0;
int main()
{
    int tmp=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>tmp;
        all_socre+=tmp;
    }
    for(int i=0;i<n;i++)
    {
        cin>>tmp;
        score+=tmp;
    }
    minus_score=all_score-score;
    printf("%06f",(all_socre*3-score*2)/minus_score);
    return 0;
}
~       
