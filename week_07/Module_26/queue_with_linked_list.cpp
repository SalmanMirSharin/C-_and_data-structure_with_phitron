
#include<bits/stdc++.h>
using namespace std;

class Node{
public:

    int value;
    Node* Next;

    Node(int val){
        value = val;
        Next = NULL;
    }

};

class Queue{
    Node* fornt;
    Node* rear;

public:

    Queue(){
        fornt = NULL;
        rear = NULL;
    }


    void Push(int val){
    Node* newNode = new Node(val);
        if(fornt==NULL){
            fornt=rear=newNode;
            return;
        }
        rear->Next = newNode;
        rear = rear->Next;
}

int Pop(){
    if(rear==NULL){
        cout<<"Queue Underflow | There is no value in the queue"<<endl;
        return;
    }

    Node* delNode = fornt;
        int chk;
        fornt = fornt->Next;
        if(fornt==NULL){
            rear = NULL;
        }
        chk = delNode->value;
        delete delNode;
        return chk;

}

int fornt(){
    int chk = fornt->value;
    return chk;
}

int Back(){
    int chk;
    chk = rear->value;
    return chk;
}

bool Empty(){
    if(fornt==NULL && rear==NULL){
        return true;
    }
    else{
        return false;
    }

}
};

int main(){


return 0;
}
