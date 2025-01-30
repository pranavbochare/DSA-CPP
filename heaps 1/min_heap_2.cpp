#include<iostream>
using namespace std;
#include<queue>
int main()
{
    priority_queue<int, vector<int> ,greater<int> > pq;
    pq.push(10);
    pq.push(2);
    pq.push(3);
    pq.push(4);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
}