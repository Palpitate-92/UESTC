#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num_count;
    char num[1005];
    cin >> num;
    num_count = strlen(num);
    sort(num, num + num_count);
    for (int i = 0; i < num_count;i++)
        cout << num[i];
    return 0;
}