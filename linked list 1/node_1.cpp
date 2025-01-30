#include<iostream>
using namespace std;
class node{
public:
    int value;
    node* next;
};
int main()
{
    // 10 20 30 40 50
    node a;
    a.value=10;
    node b;
    b.value=20;
    node c;
    c.value=30;
    node d;
    d.value=40;
    // forming
    a.next=&b;
    b.next=&c;
    c.next=&d;
    d.next=NULL;
}