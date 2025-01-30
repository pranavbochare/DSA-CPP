// #include<iostream>
// #include<queue>
// using namespace std;
// int main()
// {
//     int arr[]={10,20,-4,6,18,2,105,118};
//     int k=3;
//     int n=sizeof(arr)/sizeof(arr[0]);
//     priority_queue<int> pq;
//     for(int i=0;i<n;i++){
//         if(pq.size()<=k){
//             pq.push(arr[i]);
//         }
//         else{
//             pq.pop();
//         }
//     }
//     pq.pop();
//     cout<<pq.top();
// }


#include<iostream>
#include<queue>
using namespace std;
int main()
{
    int arr[]={10,20,-4,6,18,2,105,118};
    int k=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    priority_queue<int> pq;                // maxheap
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }
    cout<<pq.top();
}