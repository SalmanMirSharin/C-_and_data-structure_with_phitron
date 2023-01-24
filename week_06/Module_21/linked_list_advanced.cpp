
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
            return;
        }

        Node* temp = head;

        while(temp->Next!=NULL){
            temp= temp->Next;
        }

        temp->Next = newNode;
}

void display(Node* head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->value;
        if(temp->Next!=NULL){
            cout<<"->";
        }
        temp = temp->Next;
    }
    cout<<endl;
}

void makeCycle(Node* &head, int pos){

            Node* temp = head;
            Node* startNode;
            int count = 1;

            while(temp->Next!=NULL){

                if(count==pos) startNode = temp;
                count++;
                temp = temp->Next;
            }
            temp->Next = startNode;
}
     //I have some question here: How it's being called,
bool detectCycle(Node* &head){
        Node* slow = head;
        Node* fast = head;

        while(fast!=NULL && fast->Next!=NULL){

            slow = slow->Next;
            fast = fast->Next->Next;

           // How slow->Next == fast->Next work; becase i thing here will be fast->Next->Next;
            if(slow->Next==fast->Next){
                return true;
            }
        }
        return false;
}

void removeCycle(Node* &head){
        Node* slow = head;
        Node* fast = head;

        do{
            slow = slow->Next;
            fast = fast->Next->Next;
        }while(slow!=fast);

        fast = head;

        while(fast->Next!=slow->Next){

                slow = slow->Next;
                fast = fast->Next;
        }

        slow->Next = NULL;
}

int main(){

    Node* head = NULL;

        int value,position;

            cout<<"choice 1: Inser at Head!"<<endl
                <<"choice 2: Make Cycle!"<<endl
                <<"choice 3: Detection Cycle!"<<endl
                <<"choice 4: Remove Cycle!"<<endl
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
                cout<<"Enter the position to create Cycle: ";
                cin>>position;
                makeCycle(head,position);
                break;
            case 3:
                bool detect;
                detect = detectCycle(head);
                if(detect==true){
                    cout<<"There is a cycle in the list"<<endl;
                }
                else{
                    cout<<"There is No cycle in the list"<<endl;
                }
                break;
            case 4:
                detect = detectCycle(head);
                if(detect==true){
                    removeCycle(head);
                }
                else{
                    cout<<"There is No cycle in the list"<<endl;
                }
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
