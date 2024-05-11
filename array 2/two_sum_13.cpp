// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(3);
//     v.push_back(2);
//     v.push_back(4);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(1);
//     v.push_back(6);
//     int x=7;
//     for(int i=0;i<v.size();i++){
//         for(int j=i+1;j<v.size();j++){
//             if(v[i]+v[j]==x){
//                 cout<<i<<" "<<j<<endl;
//             }
//         }
//     }

// }


#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int x;
    cout<<"enter a number you want to check : ";
    cin>>x;
    int size;
    cout<<"enter size of an array : ";
    cin>>size;
    cout<<"enter array elements : ";
    vector<int> v;
    for(int i=0;i<size;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(int j=0;j<v.size()-1;j++){
        for(int k=j+1;k<v.size();k++){
            if(v[j]+v[k]==x){
                cout<<j<<" "<<k<<endl;
            }
        }
    }
}