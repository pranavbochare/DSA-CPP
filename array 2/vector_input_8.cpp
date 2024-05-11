// if size is given
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int> v(5);
//     for(int i=0;i<5;i++){
//         cin>>v[i];
//     }
//     for(int i=0;i<5;i++){
//         cout<<v[i]<<" ";
//     }
// }

// if size not given
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    for(int i=0;i<5;i++){   // we can decide size by taking n as input 
        int x;              // at the place of 5
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
}