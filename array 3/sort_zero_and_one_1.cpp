// pranav's code
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(1);
//     v.push_back(0);
//     int count0=0;
//     int count1=0;
//     for(int i=0;i<v.size();i++){
//         if(v[i]==0){
//             count0++;
//         }
//         else{
//             count1++;
//         }
//     }
//     for(int i=0;i<count0;i++){
//         cout<<0<<" ";
//     }
//     for(int i=0;i<count1;i++){
//         cout<<1<<" ";
//     }
// }

//raghav'code
// #include<iostream>
// #include<vector>
// using namespace std;
// void sort01(vector<int>& v){
//     int noz=0;
//     int noo=0;
//     for(int i=0;i<v.size();i++){
//         if(v[i]==0) noz++;
//         else noo++;
//     }
//     for(int i=0;i<v.size();i++){
//         if(i<noz) v[i]=0;
//         else v[i]=1;
//     }
// }
// int main()
// {
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(1);
//     v.push_back(0);

//     sort01(v);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }

//two pointer method
#include<iostream>
#include<vector>
using namespace std;
void sort01(vector<int>& v){
    int i=0;
    int j=v.size()-1;
    while(i<j){
        if(v[j]==1) j--;
        else if(v[i]==0) i++;
        //if(i>j) break;
        else if(v[i]==1 && v[j]==0){
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
    }
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);

    sort01(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}