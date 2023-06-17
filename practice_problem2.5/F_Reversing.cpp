#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    // using buildin function
    // reverse(v.begin(),v.end());
    // for(int x:v) cout<<x<<" ";
for(int i=n-1;i>=0;i--){
    cout<<v[i]<<" ";
}
    return 0;
}


