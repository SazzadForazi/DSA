#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    queue<string> q;

    for (int i = 0; i < T; i++)
    {
        int cmd;
        string nm;
        cin >> cmd;

        if (cmd == 0)
        {
            cin >> nm;
            q.push(nm);
        }
        else
        {
            if (q.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                cout << q.front() << endl;
                q.pop();
            }
        }
    }

    return 0;
}