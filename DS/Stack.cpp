#include<iostream>
using namespace std;

const int MAX = 100;

class Stack{
private:
    int top;
    int arr[MAX];

public:
    Stack();
    bool isEmpty();
    bool isFull();
    void push(int x);   
    int pop();
    int peek();
    int size();
};

Stack::Stack(){
    top = -1;
}

bool Stack::isEmpty(){
    return top == -1;
}

bool Stack::isFull(){
    return top == MAX - 1;
}

void Stack::push(int x){
    if(this->isFull()){
        cout << "Stack OverFlow\n";
        return;
    }
    arr[++top] = x;
}

int Stack::pop(){
    if(this->isEmpty()){
        cout << "Stack UnderFlow\n";
        return -1;
    }
    return arr[top--];
}

int Stack::peek(){
    if(this->isEmpty()){
        cout << "Stack is Empty\n";
        return -1;
    }
    arr[top];
}

int Stack::size(){
    return top + 1;
}

int main(){
    Stack s;
    s.pop();
    s.push(2);
    s.push(3);
    s.push(4);
    s.pop(); 
    cout << s.peek() << endl;
    cout << s.size() << endl;
    cout << s.peek() << endl;
}