#include<iostream>
using namespace std;

const int MAX = 1000;

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
    int size();
};

Stack::Stack(){
    top = -1;
}

bool Stack::isEmpty(){
    return top == - 1;
}

bool Stack::isFull(){
    return top == MAX - 1;
}

void Stack::push(int x){
    if(isFull()){
        cout << "Stack OverFlow\n";
        return;
    }
    else arr[++top] = x;
}

int Stack::pop(){
    if(isEmpty()){
        cout << "Stack UnderFlow\n";
        return -1;
    }
    else{
        return arr[--top];
    }
}

int Stack::size(){
    if(isEmpty()){
        cout << "Stack is Empty\n";
        return -1;
    }
    else return arr[top];
}

int main(){
    Stack s;
    s.push(2);
    cout << s.isEmpty() << endl;
}