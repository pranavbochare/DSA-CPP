// #include<iostream>
// #include<vector>
// using namespace std;
// int trap(vector<int>& v){
//     int n=v.size();
//     int prev[n];
//     prev[0]=-1;
//     int max=v[0];
//     for(int i=1;i<n;i++){
//         prev[i]=max;
//         if(v[i]>max){
//             max=v[i];
//         }
//     }
//     int next[n];
//     next[n-1]=-1;
//     max=v[n-1];
//     for(int i=n-2;i>=0;i--){
//         next[i]=max;
//         if(v[i]>max){
//             max=v[i];
//         }
//     }
//     int mini[n];
//     for(int i=0;i<n;i++){
//         mini[i]=min(prev[i],next[i]);
//     }
//     int water=0;
//     for(int i=0;i<n;i++){
//         if(mini[i]>v[i]){
//             water+=(mini[i]-v[i]);
//         }
//     }
//     cout<<water;

// }
// int main()
// {
//     vector<int> v;
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(2);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(3);
//     v.push_back(2);
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(1);
//     trap(v);
// }




#include<iostream>
#include<vector>
using namespace std;
int trap(vector<int>& v){
    int n=v.size();
    int prev[n];
    prev[0]=-1;
    int max=v[0];
    for(int i=1;i<n;i++){
        prev[i]=max;
        if(v[i]>max){
            max=v[i];
        }
    }
    prev[n-1]=-1;
    max=v[n-1];
    for(int i=n-2;i>=0;i--){
        if(prev[i]>max) prev[i]=max;
        if(v[i]>max){
            max=v[i];
        }
    }
    int water=0;
    for(int i=0;i<n;i++){
        if(prev[i]>v[i]){
            water+=(prev[i]-v[i]);
        }
    }
    cout<<water;

}
int main()
{
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    trap(v);
}