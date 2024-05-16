#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str="abjkoe";
    int count=0;
    int ans=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
        count++;
        }
        else{
            ans+=count*(count+1)/2;
            count=0;
        }
    }
    ans+=count*(count+1)/2;
    cout<<ans;
}