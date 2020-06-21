#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    int n, m, L, R, a, b, c, d;
    scanf("%d", &T);
    while (T--)
    {
        int mTime = 0;
        scanf("%d%d%d%d%d%d%d%d",&n,&m,&L,&R,&a,&b,&c,&d);
        mTime += abs(a - c);
        if(b>L&&b<R&&d>L&&d<R)
            mTime += min(b + d - 2*L, 2*R - b - d);
            else
                mTime += abs(b - d);
            printf("%d\n", mTime);
    }
    return 0;
}