#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6 + 10;
const int MAXM = 2e6 + 5;
const int All = 2e6;
int mx[MAXM << 2], mn[MAXM << 2], lazy[MAXM << 2];
int pt = 1e6;
char s[MAXN], p[MAXM];
void add(int u, int v)
{
    mx[u] += v;
    mn[u] += v;
    lazy[u] += v;
    return;
}
void pushDown(int u)
{
    if (lazy[u] == 0)
        return;
    add(u << 1, lazy[u]);
    add(u << 1 | 1, lazy[u]);
    lazy[u] = 0;
    return;
}
void Segment(int u, int l, int r, int v, int pl, int pr)
{
    if (pl == l && pr == r)
    {
        add(u, v);
        return;
    }
    pushDown(u);
    int mid = (pr + pl) >> 1;
    if (r <= mid)
        Segment(u << 1, l, r, v, pl, mid);
    else if (l > mid)
        Segment(u << 1 | 1, l, r, v, mid + 1, pr);
    else
    {
        Segment(u << 1, l, mid, v, pl, mid);
        Segment(u << 1 | 1, mid + 1, r, v, mid + 1, pr);
    }
    mx[u] = max(mx[u << 1], mx[u << 1 | 1]);
    mn[u] = min(mn[u << 1], mn[u << 1 | 1]);
    return;
}
int qAll(int u, int pl, int pr)
{
    if (pl == pr)
        return mn[u];
    pushDown(u);
    int mid = (pl + pr) >> 1;
    return qAll(u << 1 | 1, mid+1, pr);
}
int main()
{
    int n;
    scanf("%d%s", &n, s);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R')
            pt++;
        else if (s[i] == 'L')
            pt--;
        else if (s[i] == '(')
        {
            if (p[pt] != '(')
            {
                if (p[pt] == ')')
                    Segment(1, pt, All, 2, 1, All);
                else
                    Segment(1, pt, All, 1, 1, All);
                p[pt] = '(';
            }
        }
        else if (s[i] == ')')
        {
            if (p[pt] != ')')
            {
                if (p[pt] == '(')
                    Segment(1, pt, All, -2, 1, All);
                else
                    Segment(1, pt, All, -1, 1, All);
                p[pt] = ')';
            }
        }
        else
        {
            if (p[pt] == '(')
                Segment(1, pt, All, -1, 1, All);
            if (p[pt] == ')')
                Segment(1, pt, All, 1, 1, All);
            p[pt] = s[i];
        }
        if (mn[1] >= 0 && qAll(1, 1, All) == 0)
            printf("%d ", mx[1]);
        else
            printf("-1 ");
    }
    puts("");
    return 0;
}