

#include<bits/stdc++.h>
using namespace std;
template<typename N>
class Node{
public:

    N value;
    Node<N> *Next;

    Node(N val){
        value = val;
        Next = NULL;
    }

};
template<typename Q>
class Queue{
    Node<Q> *fornt;
    Node<Q> *rear;

public:

    Queue(){
        fornt = NULL;
        rear = NULL;
    }


    void Push(Q val){
    Node<Q> *newNode = new Node<Q>(val);
        if(fornt==NULL){
            fornt=rear=newNode;
            return;
        }
        rear->Next = newNode;
        rear = rear->Next;
}

Q Pop(){
      Q chk;
    if(rear==NULL){
        cout<<"Queue Underflow | There is no value in the queue"<<endl;
        return chk;
    }

    Node<Q>*delNode = fornt;

        fornt = fornt->Next;
        if(fornt==NULL){
            rear = NULL;
        }
        chk = delNode->value;
        delete delNode;
        return chk;

}

Q Fornt(){
    Q chk = fornt->value;
    return chk;
}

Q Back(){
    Q chk;
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
