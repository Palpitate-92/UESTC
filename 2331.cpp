#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e2;
int MIN[MAXN + 7];
int main()
{
    int n, m, i = 0, k;
    scanf("%d%d", &n, &m);
    memset(MIN, 1, sizeof(MIN));
    while (m > 0)
    {
        i++;
        scanf("%d", &k);
        if (k != -1 && k < MIN[i])
            MIN[i] = k;
        if (i == n)
            i = 0, m--;
    }
    for (i = 1; i <= n; i++)
        m += MIN[i];
    printf("%d\n", m);
    return 0;
}