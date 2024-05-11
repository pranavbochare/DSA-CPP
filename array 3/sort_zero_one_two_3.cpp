// #include<iostream>
// #include<vector>
// using namespace std;
// void arrange(vector<int>& v){
//     int noz=0;
//     int noo=0;
//     int _not=0;
//     for(int i=0;i<v.size();i++){
//         if(v[i]==0) noz++;
//         else if(v[i]==1) noo++;
//         else if(v[i]==2) _not++;
//     }
//     for(int i=0;i<v.size();i++){
//         if(i<noz) v[i]=0;
//         else if(i<(noz+noo)) v[i]=1;
//         else v[i]=2;
//     }
// }
// int main()
// {
//     vector<int> v;
//     v.push_back(2);
//     v.push_back(0);
//     v.push_back(2);
//     v.push_back(1);
//     v.push_back(1);
//     v.push_back(0);

//     arrange(v);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }    
// }


//3 pointer algorithm (dutch flag method)
#include<iostream>
#include<vector>
using namespace std;
void arrange(vector<int>& v){
    int low=0;
    int mid=0;
    int high=v.size()-1;
    while(mid<high){
    if(v[mid]==2){
        int temp=v[mid];
        v[mid]=v[high];
        v[high]=temp;
        high--;
    }
    if(v[mid]==0){
        int temp=v[mid];
        v[mid]=v[low];
        v[low]=temp;
        low++;
        mid++;
    }
    if(v[mid]==1){
        mid++;
    }
    }
}
int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);

    arrange(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }  
}
