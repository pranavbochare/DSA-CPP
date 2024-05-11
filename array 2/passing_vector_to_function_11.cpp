// #include<iostream>
// #include<vector>
// using namespace std;
// void change(vector<int> a){   // not change -> pass by value
//     a[0]=100;
// }
// int main()
// {
//     vector<int> v;
//     v.push_back(9);
//     v.push_back(3);
//     v.push_back(6);
//     v.push_back(1);
//     for(int i=0;i<v.size();i++){
//         cout<<v.at(i)<<" ";
//     }
//     cout<<endl;
//     change(v);           
//     for(int i=0;i<v.size();i++){
//         cout<<v.at(i)<<" ";
//     }
// }


#include<iostream>
#include<vector>
using namespace std;
void change(vector<int>& a){   //change due to & -> pass by reference
    a[0]=100;
}
int main()
{
    vector<int> v;
    v.push_back(9);
    v.push_back(3);
    v.push_back(6);
    v.push_back(1);
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    change(v);           
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
}
