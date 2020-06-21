#include <bits/stdc++.h>
using namespace std;
const int N = 1e6;
int a[N + 100];
int judge[N + 100];
int find(int u)
{
    return (a[u] == u) ? u : (a[u] = find(a[u]));
}
int main()
{
    int n=1000000, i = 0, sets = 0, tp;
    clock_t t1, t2;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        a[i] = i;
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &tp);
        a[i] = find(tp);
    }
    for (i = 1; i <= n; i++)
    {
        tp = find(i);
        if (judge[tp] == 0)
            sets++;
        judge[tp] = 1;
    }
    printf("%d", sets);
    return 0;
}