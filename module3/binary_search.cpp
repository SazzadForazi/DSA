#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int x;cin>>x;
    int l=0,r=n-1;
    bool flag=false;
    while(l<=r){
        int mid = (l+r)/2;
        if(a[mid]==x){
            flag=true;
            break;
        }
        if(x>a[mid]){
            l=mid+1; //dane
        }
        else{
            r=mid-1; //bame
        }
    }
if(flag==true) cout<<"yes"<<endl;
else cout<<"NO"<<endl;
    return 0;
}


