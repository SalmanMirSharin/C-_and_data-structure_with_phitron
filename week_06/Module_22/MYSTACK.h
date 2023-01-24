

#include<bits/stdc++.h>
using namespace std;

class Node{

public:
    int value;
    Node* Next;
    Node* pre;

    Node(int val){

        value = val;
        Next = NULL;
        pre = NULL;
    }
};

class Stack{

    Node* head;
    Node* top;
    int Count = 0;

public:

    Stack(){
        head = NULL;
        top = NULL;
    }

    //PUSH:
    void Push(int val){

        Node* newNode = new Node(val);
        if(head == NULL){
            head=top=newNode;
            //top = newNode;
            Count++;
            return;
        }

        top->Next = newNode;
        newNode->pre = top;
        top = newNode;
        Count++;

    }
    //POP
    int Pop(){

        Node* delNode;
        int chk=-1;
        if(head==NULL){
            cout<<"Stack Underflow"<<endl;
            return chk;
        }
        delNode = top;
        if(top==head){
            head = top = NULL;
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

    //EMPTY
    bool Empty(){
        if(head==NULL) return true;
        else return false;
    }
    //SIZE
    int Size(){
        return Count;
    }
    //TOP
    int Top(){
        if(top==NULL){
            cout<<"Stack Underflow | There is no element in the stack"<<endl;
        }
        else{
            return top->value;
        }
    }
};






















