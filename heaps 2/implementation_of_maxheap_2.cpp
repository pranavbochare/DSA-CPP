#include<iostream>
using namespace std;
class MinHeap{
public:
    int arr[50];
    int idx;
    MinHeap(){
        idx=1;
    }
    int top(){
        return arr[1];
    }
    int push(int x){
        arr[idx]=x;
        int i=idx;
        idx++;
        while(i!=1){
            int parent=i/2;
            if(arr[parent]<arr[i]) swap(arr[i],arr[parent]);
            else break;
            i=parent;
        }
    }
    void pop(){
        idx--;
        arr[1]=arr[idx];
        int i=1;
        while(true){
            int left=2*i;
            int right=2*i+1;
            if(left>idx-1) break;
            if(right>idx-1){
                if(arr[i]<arr[left]){
                    swap(arr[i],arr[left]);
                    i=left;
                }
                break;
            }
            if(arr[left]>arr[right]){
                if(arr[i]<arr[left]){
                    swap(arr[i],arr[left]);
                    i=left;
                }
                else break;
            }
            else{
                if(arr[i]<arr[right]){
                    swap(arr[i],arr[right]);
                    i=right;
                }
                else break;
            }
        }
    }
    int size(){
        return idx-1;
    }
};
int main()
{
    MinHeap pq;
    pq.push(10);
    pq.push(20);
    pq.push(11);
    cout<<pq.top()<<" "<<pq.size()<<endl;
    pq.push(30);
    pq.push(40);
    pq.push(12);
    pq.push(4);
    pq.push(7);
    cout<<pq.top()<<" "<<pq.size()<<endl;
    pq.pop();
    cout<<pq.top()<<" "<<pq.size()<<endl;
    pq.pop();
    cout<<pq.top()<<" "<<pq.size()<<endl;
}