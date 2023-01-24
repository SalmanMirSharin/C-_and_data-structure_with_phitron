
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

void insertAtTail(Node* &head, int val){
            Node* newNode = new Node(val);

            if(head==NULL){
                head = newNode;
                newNode->Next = head;
                return;
            }

            Node* temp =head;

            while(temp->Next!=head){
                temp = temp->Next;
            }
            newNode->Next = head;
            temp->Next = newNode;

}

void insertAtHead(Node* &head, int val){
        Node* newNode = new Node(val);

        newNode->Next = head;

        if(head==NULL){
            head = newNode;
            newNode->Next = head;
            return;
        }

         Node* temp = head;

        while(temp->Next!=head){
            temp = temp->Next;
        }
        temp->Next = newNode;
        head = newNode;
}

int countLeangth(Node* &head){
        Node* temp = head;
        int count=0;

            if(temp==NULL){
                return -1;
            }


        do{
            count++;
            temp =temp->Next;
        }while(temp!=head);
    return count;
}

void deletionAtHead(Node* &head){

        Node* delNode = head;

        Node* temp = head;
        if(temp!=NULL){

        while(temp->Next!=head){
            temp = temp->Next;
        }

        temp->Next = delNode->Next;
        head = delNode->Next;
        delete delNode;

    }
    else{
        cout<<"There is No value in the linked list!"<<endl;
    }

}

void deletionAtTail(Node* head){

        Node* temp = head;
        if(temp!=NULL && temp->Next!=head){

        while(temp->Next->Next!=head){
                temp = temp->Next;
        }

            Node* delNode = temp->Next;
                temp->Next = delNode->Next;
                delete delNode;
        }
        else{
            if(temp==NULL){
                cout<<"There is no value in the linked list!"<<endl;
            }
            else{
                deletionAtHead(head);
            }
        }
}

void display(Node* head){

        if(head == NULL){
            cout<<"The list is Empty!"<<endl;
            return;
        }

        Node* temp = head;
        do{
            cout<<temp->value<<" ";
            temp=temp->Next;
        }
        while(temp!= head);

}

int main(){

    Node* head = NULL;

    int value,position;

    cout<<"choice 1: Insert at Tail!"<<endl
        <<"choice 2: Insert at Head!"<<endl
        <<"choice 3: Count Leangth!"<<endl
        <<"choice 4: Delete at Head!"<<endl
        <<"choice 5: Delete at Tail!"<<endl
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
                cout<<"Enter the value to Head: ";
                cin>>value;
                insertAtHead(head,value);
                break;
            case 3:
                int leangth;
                leangth = countLeangth(head);
                if(leangth==-1){
                    cout<<"There is no value in the linked list!"<<endl;
                }
                else{
                     cout<<"Leangth is: "<<leangth<<endl;
                }
                break;
            case 4:
                deletionAtHead(head);
                break;
            case 5:
                deletionAtTail(head);
                break;
            default:
                break;


        }

        cout<<"Next choice: ";
        cin>>choice;
    }

    display(head);




return 0;
}
