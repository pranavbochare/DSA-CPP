#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int> pq;
    pq.push(10);
    pq.push(2);
    pq.push(4);
    pq.push(3);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
}