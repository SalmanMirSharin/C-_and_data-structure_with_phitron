
#include<bits/stdc++.h>
using namespace std;

class D_Node{

public:
    int value;
    D_Node* Next;
    D_Node* pre;

    D_Node(int val){

        value = val;
        Next = NULL;
        pre = NULL;

    }

};


void insertAtHead(D_Node* &head, int val){
        D_Node* newHead = new D_Node(val);

        //D_Node* temp = head;
        newHead->Next = head;
        head = newHead;
        head->pre = newHead;
}

void insertAtTail(D_Node* &head, int val){
        D_Node* newNode = new D_Node(val);
        if(head==NULL){
            head = newNode;
            return;
        }
        D_Node* temp = head;

        while(temp->Next!=NULL){
                temp= temp->Next;

        }
         temp->Next = newNode;
        newNode->pre =temp;
}

int countLeangth(D_Node* &head){

        D_Node* temp = head;
        if(temp==NULL){
            return -1;
        }
        int count =0;
        while(temp!=NULL){
            count++;
              temp = temp->Next;
        }
        return count;
}

void display(D_Node* head){

        D_Node* temp = head;
        while(temp!=NULL){
            cout<<temp->value<<" ";
            temp= temp->Next;
        }
        cout<<endl;
}

void reverseIndoubly_linked_list(D_Node* &head){
        D_Node* temp = head;

        while(temp->Next!=NULL){

            temp = temp->Next;
        }

        while(temp!=NULL){
            cout<<temp->value<<" ";

            temp = temp->pre;
        }

        cout<<endl;
}

int main(){
    D_Node* head = NULL;

    int value;
        cout<<"choice 1: Insert at Tail!"<<endl
            <<"choice 2: Insert at Head!"<<endl
            <<"choice 3: Count leangth!"<<endl
            <<"choice 4: Reverse Linked lis!"<<endl
            <<"choice 0: Exit!"<<endl;

        cout<<endl;
    int choice;
    cout<<"Next choice: ";
    cin>>choice;

    while(choice!=0){

      switch(choice){
        case 1:
            cout<<"Enter the value: ";
            cin>>value;
            insertAtTail(head,value);
            break;
        case 2:
            cout<<"Enter the value: ";
            cin>>value;
            insertAtHead(head,value);
            break;
        case 3:
            int leangth;
            leangth = countLeangth(head);
            if(leangth==-1){
                cout<<"List is empty!"<<endl;
            }
          else{
              cout<<"Leangth is: "<<leangth<<endl;
          }
            break;
        case 4:
            reverseIndoubly_linked_list(head);
        default:
            break;

      }

        cout<<"Next choice: ";
        cin>>choice;
    }

    display(head);


return 0;
}
