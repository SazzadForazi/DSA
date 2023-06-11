#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    int m;cin>>m;
    vector<int>b(m);
    for(int i=0;i<m;i++)cin>>b[i];

    int x;cin>>x;
    vector<int>temp(m+n);
    (a.begin() + x, b.end());
    a.insert(a.begin() + x, b.begin(), b.end());
    
    for(int insrt:a)cout<<insrt<<" ";
    return 0;
}


