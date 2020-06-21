#include <bits/stdc++.h>
using namespace std;
const int N = 1e7;
char s[N + 100];
int main()
{
    int T, N, t1, t2, p;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &N);
        getchar();
        if(N==0)
        {
          printf("%d\n", 0);
          continue;
        }
        t1 = t2 = 0;
        scanf("%s", &s);
        for (p = 0; p < N; p++)
        {
            if (s[p] == ')' && t2 == 0)
                t1++;
            else if (s[p] == '(')
                t2++;
            else
                t2--;
        }
        printf("%d\n", t1 + t2);
    }
    return 0;
}