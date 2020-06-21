#include <bits/stdc++.h>
using namespace std;
#define LL long long
const int MAXN = 2e5;
LL a[MAXN + 10], aL[MAXN + 10], aR[MAXN + 10];
LL ans, all, GCD;
void BS(int l, int r)
{
    if (l >= r)
        return;
    int mid = (l + r) >> 1;
    BS(l, mid);
    BS(mid + 1, r);
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int i = 0, j = 0, k;
    for (k = 0; k < n1; k++)
        aL[k] = a[l + k];
    for (k = 0; k < n2; k++)
        aR[k] = a[mid + 1 + k];
    for (k = l; k <= r; k++)
    {
        if (j == n2 || (i < n1 && aL[i] < aR[j]))
            a[k] = aL[i++];
        else
        {
            a[k] = aR[j++];
            if (i < n1)
                ans += (j + mid) - k;
        }
    }
    return;
}
int main()
{
    int n;
    LL k, tp;
    scanf("%d%lld", &n, &k);
    for (LL i = 1; i <= n; i++)
    {
        scanf("%lld", &tp);
        a[i] = a[i - 1] + tp - k;
    }
    BS(0, n);
    all = (long long)n * (n + 1) >> 1;
    GCD = __gcd(ans, all);
    printf("%lld/%lld", ans / GCD, all / GCD);
    return 0;
}