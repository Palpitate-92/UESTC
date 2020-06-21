#include <bits/stdc++.h>
using namespace std;
int main()
{
    double p, k, n, a, q, c = 1, value = 0, m;
    scanf("%lf%lf%lf%lf", &p, &k, &a, &n);
    k /= 100;
    a /= 100;
    q = 1 - p;
    m = 1;
    for (int i = 1; i <= n; i++)
    {
        c = m * p;
        value += c * ((k + (i - 1) * a) * p + q);
        m *= q;
    }
    value += m * ((k + n * a) * p + q);
    printf("%.3lf\n", value / (k * p + q));
    return 0;
}