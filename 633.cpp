#include <bits/stdc++.h>
using namespace std;
#define js(x) 1 + 4 * x + 3 * (x - 1) * x / 2
int main()
{
    long long M;
    while (scanf("%lld", &M) == 1)
        printf("%lld\n", js(M));
    return 0;
}