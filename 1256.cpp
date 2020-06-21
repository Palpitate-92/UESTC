#include<bits/stdc++.h>
using namespace std;
const int n = 2e3 + 10;
int ai[n];
int data_pro[n][n];
int main()
{
    int N, M;
    scanf("%d%d",&N,&M);
    for (int i = 1; i <= N;i++)
        scanf("%d",&ai[i]) ;
    for (int i = 1; i <= N;i++)
    {
        data_pro[ai[i]][i]++;
        for (int j = 1; j <= M;j++)
            data_pro[j][i] += data_pro[j][i - 1];
    }
    int Q;
    scanf("%d",&Q);
    while(Q--)
    {
        int l, r, ans = 0;
        scanf("%d%d",&l,&r);
        for (int j = 1; j <= M;j++)
        if(data_pro[j][r]-data_pro[j][l-1])
            ans++;
        printf("%d\n", ans);
    }
    return 0;
}