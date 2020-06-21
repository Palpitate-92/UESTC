#include <bits/stdc++.h>
using namespace std;
#define LL long long
int main()
{
    LL n, w, k, tp, time = 0, lazy = 0;
    scanf("%lld%lld%lld", &n, &w, &k);
    while (n--)
    {
        scanf("%lld", &tp);
        if (tp + lazy > w)
            time += tp + lazy - w, lazy += k;
    }
    printf("%lld\n", time);
    return 0;
}