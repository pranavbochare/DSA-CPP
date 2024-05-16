// #include<iostream>
// using namespace std;
// int main()
// {
//     string str;
//     cout<<"enter a string : ";
//     cin>>str;
//     int n=str.size();
    
//     int maxcount=0;
//     char idx='a';
//     for(int i=0;i<n;i++){
//         int count=1;
//         for(int j=i+1;j<n;j++){
//             if(str[i]==str[j]){
//                 count++;
//             }
//         }
//         if(count>maxcount){
//             maxcount=count;
//             idx=str[i];
//         }  
//     }
//     cout<<maxcount<<endl;
//     cout<<idx<<endl;
// }



#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string str;
    cout<<"enter a string : ";
    cin>>str;
    vector <int> arr(26,0);
    for(int i=0;i<str.size();i++){
        char ch=str[i];
        int ascii=(int)ch;
        arr[ascii-97]++;
    }
    int max=0;
    for(int i=0;i<26;i++){
        if(arr[i]>max) max=arr[i];
    }
    for(int i=0;i<26;i++){
        if(arr[i]==max){
        int ascii=i+97;
        char ch=(char)ascii;
        cout<<ch<<" "<<max<<endl;
        }
    }
}