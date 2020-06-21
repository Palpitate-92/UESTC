#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e3;
int a[MAXN + 7], b[MAXN + 7];
int n;
struct celeste
{
    int diff;
    int p;
} c[MAXN + 7];
bool Compare(celeste t1, celeste t2)
{
    return t1.diff < t2.diff;
}
int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &b[i]);
        c[i].diff = a[i] - b[i];
        c[i].p = i;
    }
    sort(c + 1, c + n + 1, Compare);
    int mTime = 0;
    int *pt = a;
    for (int i = 1; i <= n; i++)
    {
        if (i > n / 2)
            pt = b;
        mTime += pt[c[i].p];
    }
    printf("%d\n", mTime);
    return 0;
}