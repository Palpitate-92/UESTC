#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k = 0, tp;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &tp), k += tp;
    printf("%d\n", k - n);
    return 0;
}