#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,int> m;
    m[2]=10;
    m[1]=20;
    m[3]=30;
    for(auto ele : m){        // keys sorted hoti hai , values nahi
        cout<<ele.first<<" ";
    }
    cout<<endl;
    for(auto ele : m){        // values keys ke corresponding sort hoti hai
        cout<<ele.second<<" ";
    }
}