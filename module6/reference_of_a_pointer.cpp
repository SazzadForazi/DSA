// #include <bits/stdc++.h>
// using namespace std;
// void fun(int *&p)
// {
//     cout << &p << endl;
// }
// int main()
// {
//     int val = 10;
//     int *ptr = &val;
//     fun(ptr);
//     cout << &ptr << endl;
//     return 0;
// }




#include<bits/stdc++.h>
using namespace std;
void fun(int *p){
    // *p=20;
    // p=NULL;
    cout<<&p<<endl;
}
int main()
{
    int val=10;
    int *ptr=&val;
    fun(ptr);
    cout<<&ptr<<endl;
    // cout<<*ptr<<endl;
    

    return 0;
}


