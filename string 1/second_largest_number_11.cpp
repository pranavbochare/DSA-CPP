// #include<iostream>
// #include<string>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main()
// {
//     string str="12835687";
//     char max=str[0];
    
//     for(int i=1;i<str.size();i++){
//        if(str[i]>max ) max=str[i]; 
//     }

//     char smax=str[0];  

//     for(int i=1;i<str.size();i++){
//        if(str[i]>smax && str[i]!=max ) smax=str[i]; 
//     }
//     cout<<smax<<endl;
//     cout<<max;

// }


#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    string str="18875348934";
    char max=str[0];
    char smax=str[0];
    for(int i=1;i<str.size();i++){
       if(str[i]>max ){
        smax=max;
        max=str[i];
       }
       else if(str[i]>smax && str[i]!=max){
        smax=str[i];
       }
    }
    if(smax==str[0]) cout<<"no second max";
    else cout<<smax;
}

