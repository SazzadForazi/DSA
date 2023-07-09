#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> p;
    queue<int> q;

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    q.size();

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        p.push(x);
    }
    p.size();
    if (p.size() == q.size())
    {

        while (p.empty() == false && q.empty() == false)
        {
            if (p.top() != q.front())
            {
                cout << "NO" << endl;
                return 0;
            }
            p.pop();
            q.pop();
        }
        cout << "YES" << endl;
    }

    else
    {
        cout << "NO" << endl;
    }
    return 0;
}