#include <cmath>
#include <iostream>
using namespace std;
#define max pow(2, 31)
int main()
{
    long long N, M, situations;
    cin >> N >> M;
    if (M == 1 || (N == 2 && M % 2))
    {
        cout << "0\n";
        return 0;
    }
    else if (N == 2)
    {
        cout << "1\n";
        return 0;
    }
    else if (M == 2)
    {
        cout << N - 1 << endl;
        return 0;
    }
    else
    {
        situations = (N - 1) * (N - 2);
        for (int i = 4; i <= M; i++)
            situations = pow(N - 1, i - 1) - situations;
        if (situations > max)
            cout << max << endl;
        else
        cout << situations << endl;
        return 0;
    }
}