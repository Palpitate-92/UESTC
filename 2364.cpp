#include <bits/stdc++.h>
using namespace std;
const int MAX = 500;
int dp[MAX + 5][MAX + 5][10], lg[MAX];
int n, m;
inline void init()
{
    int i, j, lgr;
    for (i = 2; i <= max(m, n); i++)
        lg[i] = lg[i >> 1] + 1;
    for (lgr = 1; lgr <= lg[min(m, n)]; lgr++)
        for (i = 1; i + (1 << lgr) - 1 <= n; i++)
            for (j = 1; j + (1 << lgr) - 1 <= m; j++)
                dp[i][j][lgr] = gcd(gcd(dp[i][j][lgr - 1], dp[i][j + (1 << (lgr - 1))][lgr - 1]), gcd(dp[i + (1 << (lgr - 1))][j][lgr - 1], dp[i + (1 << (lgr - 1))][j + (1 << (lgr - 1))][lgr - 1]));
}
inline int re_gcd(int i, int j, int r)
{
    int lgr = lg[r];
    int p = i + r - (1 << lgr), q = j + r - (1 << lgr);
    return gcd(gcd(dp[i][j][lgr], dp[i][q][lgr]), gcd(dp[p][j][lgr], dp[p][q][lgr]));
}
inline int find(int r)
{
    int cnt = 0;
    for (int i = 1; i + r - 1 <= n; i++)
        for (int j = 1; j + r - 1 <= m; j++)
            cnt += (re_gcd(i, j, r) == dp[i + (r >> 1)][j + (r >> 1)][0]);
    return cnt;
}
int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            scanf("%d", &dp[i][j][0]);
    init();
    int res = 0, pn = 1, pm = min(n, m);
    while (pn < pm)
    {
        int mid = (pn + pm) >> 1;
        mid += (mid % 2 == 0);
        if (find(mid))
            pn = mid + 1, res = mid;
        else
            pm = mid - 1;
    }
    //res = res << 1 | 1;
    printf("%d\n%d", res * res, find(res));
    return 0;
}