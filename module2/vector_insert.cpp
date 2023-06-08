#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,4,5};
    vector<int>v1={200,100,231,142};
    // v.insert(v.begin()+2,10);
    v.insert(v.begin()+2,v1.begin(),v1.end());
    for(int c:v){
        cout<<c<<" ";
    }

    return 0;
}


