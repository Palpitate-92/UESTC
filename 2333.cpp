#include <bits/stdc++.h>
using namespace std;
#define LL long long
LL n, p = 1;
int main()
{
    int ans = 1;
    cin >> n;
    while (p < n)
    {
        p = p + p * 2 + 1;
        ans++;
    }
    cout << ans << '\n';
    return 0;
}