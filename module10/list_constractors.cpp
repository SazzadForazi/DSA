#include<bits/stdc++.h>
using namespace std;
int main()
{
    // list<int>list2={1,2,3,4,5};
    int a[5]={10,20,30,40,50};

    // list<int>MyList(5,10);//index,value
    // list<int>MyList(list2);

    vector<int>v={10 ,20,30,40,50,60};

    // list<int>MyList(a,a+5);

    list<int>MyList(v.begin(),v.end());

    // for(auto it =MyList.begin();it!=MyList.end();it++){
    //     cout<<*it<<endl;
    // }

    
    //sortcut
    for(int val:MyList){
        cout<<val<<endl;
    }

    return 0;
}


