#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,2,6,78,2,4,5};
    auto it =find(v.begin(),v.end(),200 );
    if(it==v.end()) cout<<"Not found";
    else cout<<"Found";
    return 0;
}


