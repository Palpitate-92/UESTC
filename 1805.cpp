#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int N, M, K, value_1, value_2;
    cin >> N >> M >> K;
    value_1 = pow(2, M - 1);
    value_2 = pow(value_1, N - 1);
    if ((K != 1) && (M - N) % 2)
        cout << "0\n";
    else
        cout << value_2 << endl;
    return 0;
}