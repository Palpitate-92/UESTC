#include <bits/stdc++.h>
using namespace std;
const double Turn = -1;
const double Inteval = 0.5;
class ant
{
public:
    ant(void) {}
    friend istream &operator>>(istream &, ant &);
    string name;
    double place;
    int direct;
};
istream &operator>>(istream &input, ant &Ant)
{
    char temp;
    input >> Ant.name >> Ant.place >> temp;
    Ant.direct = (temp == 'L') ? -1 : 1;
    return input;
}
ant Ant[101];
int main()
{
    int T, k = 1;
    cin >> T;
    while (k <= T)
    {
        int N, L, count = 0;
        int judge_ant[101] = {0}, judge_place[2002] = {0};
        double time = 0;
        cin >> N >> L;
        while (count < N)
            cin >> Ant[++count];
        cout << "Case #" << k++ << ":\n";
        while (N)
        {
            time += Inteval;
            memset(judge_place, 0, sizeof(judge_place));
            for (int i = 1; i <= count; i++)
            {
                Ant[i].place += Inteval * Ant[i].direct;
                if (Ant[i].place == 0 || Ant[i].place == L)
                {
                    cout << time << " " << Ant[i].name << endl;
                    judge_ant[i] = 1;
                    N--;
                }
            }
            for (int i = 1; i <= count; i++)
                if (!judge_ant[i])
                {
                    int temp = Ant[i].place * 2;
                    if (!judge_place[temp])
                        judge_place[temp] = i;
                    else
                    {
                        Ant[i].direct *= Turn;
                        Ant[judge_place[temp]].direct *= Turn;
                    }
                }
        }
    }
    return 0;
}