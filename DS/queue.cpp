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
    if(this->isFull()){
        cout << "Queue is Full\n";
        return;
    }
    else if(this->isEmpty()){
        head = tail = 0;
    }
    else{
        tail++;
    }
    arr[tail] = x; 
}

int Queue::pop(){
    int index_pop;
    if(this->isEmpty()){
        cout << "queue is empty\n";
        return 0;
    }
    else if(head == tail){
        index_pop = arr[tail]; 
        arr[tail] = 0;
        head = tail = -1;
    }
    else{
        index_pop = arr[head];
        arr[head] = 0; 
        head++;
    }
    return index_pop;
}

int Queue::front(){
    return arr[head];
}

int Queue::back(){
    return arr[tail];
}

int Queue::size(){
    return tail == -1 && head == -1 ? 0 : tail - head + 1;
}

int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout << "front object : " << q.front() << endl;
    cout << "back object : " << q.back() << endl;
    cout << "Queue size : " << q.size() << endl;
    cout << "pop : " << q.pop() << endl;
    cout << "pop : " << q.pop() << endl;
    cout << "Queue size : " << q.size() << endl;
}