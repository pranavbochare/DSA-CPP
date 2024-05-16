// #include<iostream>
// using namespace std;
// int main()
// {
//     char str[]={'a','b','c','d','e'};
//     for(int i=0;i<5;i++){
//         cout<<str[i]<<" ";
//     }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     char str[]={'a','b','c','d','e'};
//     for(int i=0;str[i]!='\0';i++){
//         cout<<str[i]<<" ";
//     }
// }

#include<iostream>
using namespace std;
int main()
{
    char str[]={'a','b','\0','c','d','e'};
    for(int i=0;str[i]!='\0';i++){
        cout<<str[i]<<" ";
    }
}