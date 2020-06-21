#include <iostream>
#include <map>
using namespace std;
map<int, int> public_do;
int main()
{
    int L, M;
    cin >> L >> M;
    while (M--)
    {
        int coor_start, coor_end;
        cin >> coor_start >> coor_end;
        for (int i = coor_start; i <= coor_end; i++)
            public_do[i] = 13;
    }
    cout << L - public_do.size() + 1 << endl;
    return 0;
}