#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    scanf("%d", &N);
    N=N/2+(N==1);
    for(int i=1;i<=N;i++)
        printf("Wed.Strong");
    return 0;
}