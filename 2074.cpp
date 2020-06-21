#include <bits/stdc++.h>
using namespace std;
map<int, int> Figures;
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        Figures.clear();
        int n, m, temp, value_max = 0;
        scanf("%d%d", &n,& m);
        while (n--)
        {
            scanf("%d", &temp);
            Figures[temp]++;
            value_max = (value_max > temp) ? value_max : temp;
        }
        while (value_max)
        {
            if (m)
            {
                if (Figures[value_max])
                {
                    printf("%d ", value_max);
                    m--;
                    Figures[value_max]--;
                }
                if (!Figures[value_max])
                    value_max--;
            }
            else
                break;
        }
    }
    return 0;
}