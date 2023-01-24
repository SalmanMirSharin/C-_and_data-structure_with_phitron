
#include<bits/stdc++.h>
using namespace std;

template<typename N>
class Node{
public:

    N value;
    Node* Next;
    Node* pre;

    Node(N val){
        value = val;
        Next = NULL;
        pre = NULL;
    }
};
template<typename S>
class Stack{

    Node <S>*head;
    Node <S>*top;
    int Count =0;

public:
    Stack(){
        head = NULL;
        top = NULL;
    }

    //PUSH:
    void Push(S val){
        Node <S> *newNode = new Node<S>(val);
        if(head==NULL){
            head=top=newNode;
             Count++;
            return;
        }
       top->Next = newNode;
       newNode->pre = top;
       top = newNode;
        Count++;
    }
    //POP:
    S Pop(){
        Node <S>*delNode;
        delNode = top;
        S chk;
        if(head==NULL){
            cout<<"Stack Underflow"<<endl;
            return chk;
        }

        if(head==top){
            head=top=NULL;
        }
        else{
            top = delNode->pre;
            top->Next = NULL;
        }
        chk = delNode->value;
        delete delNode;
        Count--;
        return chk;
    }
    //EMPTY:
    bool Empty(){
        if(head==NULL) return true;
        else return false;
    }
    //SIZE:
    int Size(){
        return Count;
    }
    //TOP:
    S Top(){
        S chk;
        if(top==NULL){
            cout<<"Stack Underflow | There is no value"<<endl;
        }
        else{
            chk = top->value;
        }
        return chk;
    }

    //MID:
    S mid(){
        S chk;
        if(head==NULL){
         return chk;
        }
        Node<S> *slow =head;
        Node<S> *fast = head;

        while(fast!=NULL && fast->Next!=NULL){

                slow = slow->Next;
                fast = fast->Next->Next;
        }

        return slow->value;

    }
};


