#include<iostream>
using namespace std;
class vector{
public:
    int size;
    int capacity;
    int* arr;

    vector(){
        size=0;
        capacity=1;
        arr=new int[1];
    }

    void add(int ele){
        if(size==capacity){
            capacity*=2;
            int* arr2=new int[capacity];
            for(int i=0;i<size;i++){
                arr2[i]=arr[i];
            }
            arr=arr2;
        }
        arr[size]=ele;
        size++;
    }

    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    int get(int idx){
        return arr[idx];
    }

    void remove(){
        size--;
    }
};
int main()
{
    vector v;
    v.add(10);
    v.print();
    v.add(5);
    v.print();
    v.add(9);
    v.print();
    v.add(3);
    v.print();

    cout<<v.get(2)<<endl;

    v.remove();
    v.print();
}