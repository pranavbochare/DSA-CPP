#include<iostream>
using namespace std;
int main()
{
    int x=23;   // 23 se 31 banane ke liye kitne bits required hai
    int y=31;
    cout<<__builtin_popcount(x^y);
}