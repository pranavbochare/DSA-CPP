#include<iostream>
using namespace std;
int n=4;   // global variable , usually interviever ko pasand nahi aate
void binaryString(string str){
    if(str.size()==n){
        cout<<str<<endl;
        return;   
    }
    if(str[str.size()-1]=='1'){
        binaryString(str+'0');
    }
    else{
        binaryString(str+'0');
        binaryString(str+'1');  
    }
}
int main()
{
    
    binaryString("");
}