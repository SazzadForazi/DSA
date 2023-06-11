#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int s=n, m=(n/2)+1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++){
            if (i==j && i!=m)cout<<"\\";
            else if (i==j && i==m) cout<<"X";
            else if (i+j==n+1 && i!=m) cout<<"/";  
            else cout<<" ";
        }
        cout<<endl;
    }  
    return 0;
}


// for (int i = 1; i <= N; i++)
//     {   

//         for (int j = 1; j <= N; j++)
//         {
//             if (i==j)
//             {   
//                 if (i!=N/2+1)
//                 {
//                     cout<<"\\";
//                 }
//                 else{
//                     cout<<"X";
//                 }
                
//             }
//             else if(i==N-j+1)
//             {
//                 cout<<"/";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
    
// }