#include <iostream>
#include <stack>

using namespace std;

bool val_funIS(string s)
{
    stack<char> st;

    for (char c : s)
    {
        if (c == 'A')
        {
            if (!st.empty() && st.top() == 'B')
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }
        else if (c == 'B')
        {
            if (st.empty() || st.top() != 'A')
            {
                st.push(c);
            }
            else
            {
                st.pop();
            }
        }
    }

    return st.empty();
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;

        if (val_funIS(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}