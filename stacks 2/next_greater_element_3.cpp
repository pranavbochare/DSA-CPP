// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//     int arr[]={3,1,2,5,4,6,2,3};          // O(n square)
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int ans[n];
//     for(int i=0;i<n;i++){
//         ans[i]=-1;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]>arr[i]){
//                 ans[i]=arr[j];
//                 break;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<ans[i]<<" ";
//     }
// }


// using stack
#include<iostream>
#include<climits>
#include<stack>
using namespace std;
int main()
{
    int arr[]={3,1,2,5,4,6,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans[n];
    stack <int> st;
    ans[n-1]=-1;
    st.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){  // sc = O(n)   tc = O(n)
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        if(st.size()==0) ans[i]=-1;
        else ans[i]=st.top();
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}