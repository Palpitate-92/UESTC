#include <bits/stdc++.h>
using namespace std;
const int MAXN = 5e3;
int a[MAXN + 10];
int n, X, Y;
int r, tr;
int seek(int nx)
{
    tr = 0;
    for (int i = 0; i < n; i++)
    {
        int k = a[i] - nx * X;
        if (k <= 0)
            continue;
        tr += k / Y + (k % Y != 0);
    }
    return tr + nx;
}
int main()
{
    int am = 0;
    scanf("%d%d%d", &n, &X, &Y);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        am = max(am, a[i]);
    }
    int xm = am / X + (am % X != 0);
    r = seek(0);
    for (int i = 1; i <= xm; i++)
        r = min(r, seek(i));
    cout << r << endl;
    return 0;
}