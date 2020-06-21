#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int num_papers, papers_size, size_com = 0, papers_count = 0;
        char key_word[21], papers[101], temp, papers_com[101];
        cin >> num_papers >> key_word;
        while (num_papers--)
        {
            cin.ignore();
            cin.get(papers, 101, '\n');
            bool judge = false;
            papers_size = strlen(papers);
            papers[papers_size] = ' ';
            for (int i = 0; i <= papers_size; i++)
            {
                if ((temp = papers[i]) != ' ')
                    papers_com[size_com++] = temp;
                else
                {
                    papers_com[size_com] = '\0';
                    int a = strcmp(key_word, papers_com);
                    if (!strcmp(key_word, papers_com) && !judge)
                    {
                        papers_count++;
                        judge = true;
                        size_com = 0;
                    }
                    else
                        size_com = 0;
                }
            }
        }
        if (papers_count)
            cout << papers_count << endl;
        else
            cout << "Do not find\n";
        puts("");
    }
    return 0;
}