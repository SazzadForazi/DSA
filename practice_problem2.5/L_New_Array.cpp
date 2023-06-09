#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v1(n),v2(n),c;
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }
    c.insert(c.begin(), v2.begin(), v2.end());
    c.insert(c.end(),v1.begin(),v1.end());
   
    for (int x : c)
    {
        cout << x << " ";
    }
    return 0;
}
