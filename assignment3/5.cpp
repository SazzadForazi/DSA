#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        stack<char> qq, s;
        cin >> x;
        for (int j = 0; j < x; j++)
        {

            char c;
            cin >> c;
            if (qq.empty())
            {
                qq.push(c);
            }
            else
            {
                if (c == qq.top())
                {
                    qq.pop();
                }
                else if (c == 'R' && qq.top() == 'G' || c == 'G' && qq.top() == 'R')
                {
                    qq.pop();
                    if (!qq.empty() && qq.top() == 'Y')
                    {
                        qq.pop();
                    }
                    else
                    {
                        qq.push('Y');
                    }
                }
                else if (c == 'R' && qq.top() == 'B' || c == 'B' && qq.top() == 'R')
                {
                    qq.pop();
                    if (!qq.empty() && qq.top() == 'P')
                    {
                        qq.pop();
                    }
                    else
                    {
                        qq.push('P');
                    }
                }
                else if (c == 'B' && qq.top() == 'G' || c == 'G' && qq.top() == 'B')
                {
                    qq.pop();
                    if (!qq.empty() && qq.top() == 'C')
                    {
                        qq.pop();
                    }
                    else
                    {
                        qq.push('C');
                    }
                }
                else
                {
                    qq.push(c);
                }
            }
        }
        while (!qq.empty())
        {
            s.push(qq.top());
            qq.pop();
        }
        while (!s.empty())
        {
            cout << s.top();
            s.pop();
        }

        cout << " " << endl;
    }
    return 0;
}