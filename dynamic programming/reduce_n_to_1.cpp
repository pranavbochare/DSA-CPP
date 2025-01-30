// #include<iostream>
// #include<algorithm>
// #include<climits>
// using namespace std;

// int f(int n) {
   
//     if (n == 1) return 0;  
//     if (n == 2 || n == 3) return 1;  
//     int result = 1 + f(n - 1);

//     if (n % 2 == 0) {
//         result = min(result, 1 + f(n / 2));
//     }

//     if (n % 3 == 0) {
//         result = min(result, 1 + f(n / 3));
//     }
    
//     return result;
// }

// int main() {
//     int n;
//     cin >> n;
//     cout << f(n) << endl;  
// }


#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
#define inf INT_MAX
using namespace std;

int f(int n){
    if(n==1) return 0;
    if(n==2 || n==3) return 1;
    return 1 + min ({f(n-1),(n%2==0) ? f(n/2) : inf , (n%3==0) ? f(n/3) : inf});
}

vector<int> dp;
int ftd(int n){   // O(n)
    if(n==1) return 0;
    if(n==2 || n==3) return 1;
    if(dp[n]!=-1) return dp[n];
    return dp[n]= 1 + min ({ftd(n-1),(n%2==0) ? ftd(n/2) : inf , (n%3==0) ? ftd(n/3) : inf});
}

int fbu(int n){
    // O(n)
    dp.clear();
    dp.resize(n+1,-1);
    dp[1]=0;
    dp[2]=1;
    dp[3]=1;
    for(int i=4;i<=n;i++){
        dp[i]=1 + min ({dp[i-1],(i%2==0) ? dp[i/2] : inf , (i%3==0) ? dp[i/3] : inf});
    }
    return dp[n];
}
int main()
{
    int n;
    cin>>n;
    cout<<f(n)<<endl;
    dp.clear();
    dp.resize(100,-1);
    cout<<ftd(n)<<endl;
    cout<<fbu(n)<<endl;
}