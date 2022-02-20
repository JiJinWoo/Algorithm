#include<iostream>
using namespace std;

const int MAX = 100;

class Queue{
private:
    int head, tail;
    int arr[MAX];

public:
    Queue();
    bool isEmpty();
    bool isFull();
    void push(int x);
    int pop();
    int front();
    int back();
    int size();
};

Queue::Queue(){
    head = tail = -1;
}

bool Queue::isEmpty(){
    return head == -1 && tail == -1;
}

bool Queue::isFull(){
    return tail == MAX - 1;
}

void Queue:: push(int x){
    if(isFull()){
        cout << "Queue is Full\n";
        return;
    }
}