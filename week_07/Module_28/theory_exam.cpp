//
//#include<stdio.h>
//#include<string.h>
#include<bits/stdc++.h>
//#include"MYSTACK.h"
//using namespace std;
//    Stack<int> st;
//int top=-1;
//char sstack[4]={'\0'};
//int main()
//{
//    char Str1[4]={'\0'};
//    char Str2[4]={'\0'};
//    int i;
//    strcpy(Str1, "CSE");
//    for(i=0; i<3; ++i){
//    st.Push(Str1[i]);
//    }
//    for(i=0; i<3; ++i){
//    Str2[i]=st.Pop();
//    }
//    printf("%s", Str2);
//
//    return 0;
//}
//(Here this two functin will not work, Because we know every thing has been finished)
//void push(char x){
//  	sstack[++top]=x;
//  	return;
//}
//char Pop(void){
//   return sstack[top--];}





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

void insertAt(Node* &head, int val){
    Node* NewNode = new Node(val);

    if(head == NULL){
        head = NewNode;
        return;
    }
    Node* temp = head;

    while(temp->Next!=NULL){
            temp = temp->Next;
    }
    temp->Next = NewNode;
}

//void prefixSum(Node* head){
//        Node* temp = head;
//        Node* cur = head->Next;
//        int s =0;
//
//        while(temp!=NULL){
//                s = temp->value+cur->value;
//
//
//            temp = temp->Next;
//        }
//
//        cout<<s;
//}


void display(Node* head){

    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->value<<" ";
        temp = temp->Next;
    }
    cout<<endl;
}


int main(){
         Node* head = NULL;
        int n, val;

        cin>>n;

        for(int i=0; i<n; i++){
            cin>>val;
          insertAt(head,val);
        }

        display(head);


return 0;
}









