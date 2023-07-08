#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>myList={10,20,30,40,40,40,50,40};
    list<int>newList;
    // list<int>anotherList={500,600,700};
    newList=myList;
    // newList.push_back(100);
    // newList.push_front(100);
    // newList.pop_back();
    // newList.pop_back();
    // newList.pop_back();
    // newList.pop_front();
    // newList.insert(next(newList.begin(),2),100);
    // newList.insert(next(newList.begin(),2),{522,6655});
    // newList.insert(next(newList.begin(),2),anotherList.begin(),anotherList.end());

    // newList.erase(next(newList.begin(),1),next(newList.begin(),3));
    
    // replace(newList.begin(),newList.end(),40,420);

    // for(int val:newList){
    //     cout<<val<<endl;
    // }



    auto it=find(newList.begin(),newList.end(),60);
    if(it==newList.end()){
        cout<<"Not found";
    }
    else{
        cout<<"found";
    }

    return 0;
}


