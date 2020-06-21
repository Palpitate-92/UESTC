#include<iostream>
using namespace std;
int main()
{
    int n, num_all=1, num_change=1,num_true, kinds = 0;
    cin >> n;
    n *= 2;
    while(n>=num_change)
    {
        num_true = num_change;
        kinds++;
        num_change = num_all * 2 + 1;
        num_all += num_change;
    }
    cout << kinds;
    return 0;
}