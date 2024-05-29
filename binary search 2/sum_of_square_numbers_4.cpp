// #include<iostream>
// #include<algorithm>
// #include<math.h>
// using namespace std;
// bool perfectsquare(int n){
//     int root=sqrt(n);
//     if(root*root==n) return true;
//     else return false;
// }
// int main()
// {
//     int c=41;
//     int x=0;
//     int y=c;                       // O(c) tc
//     bool flag=false;
//     while(x<=y){
//         if(perfectsquare(x) && perfectsquare(y)){
//             flag=true;
//             break;
//         }
//         else{
//             x++;
//             y--;
//         }
//     }
//     if(flag==false) cout<<0;
//     else cout<<1;
// }


#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
bool perfectsquare(int n){
    int root=sqrt(n);
    if(root*root==n) return true;
    else return false;
}
int main()
{
    int c=39;                           // O(root c)
    int x=0;
    int y=c;
    bool flag=false;
    while(x<=y){
        if(perfectsquare(x) && perfectsquare(y)){
            flag=true;
            break;
        }
        else if(!perfectsquare(y)){
            y=(int)sqrt(y)*(int)sqrt(y);
            x=c-y;
        }
        else{ // x is not perfect
            x=((int)sqrt(x)+1)*((int)sqrt(x)+1);
            y=c-x;
        }
    } 
    if(flag==true) cout<<true;
    else cout<<false;
}