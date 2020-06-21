#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int mountain[N] = {0};
int main()
{
    int n, m, temp;
    cin >> n >> m;
    while (n--)
    {
        cin >> temp;
        for (int i = 0; i <= temp;i++)
            mountain[i]++;
    }
    while (m--)
    {
        int judge;
        scanf("%d", &judge);
        printf("%d\n", mountain[judge]);
    }
    return 0;
}