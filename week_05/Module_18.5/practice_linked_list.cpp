
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

void inputInLinkedList(Node* &head, int val){

            Node* newNode = new Node(val);

            if(head==NULL){
                head = newNode;
                return;
            }
            Node* temp = head;
            while(temp->Next!=NULL){

                temp = temp->Next;
            }
            temp->Next= newNode;

}

void insertAtHead(Node* &head,int val){

            Node* newNode = new Node(val);
            newNode->Next = head;
            head = newNode;
}

int findOutPosition(Node* &head,int position){
            Node* temp =head;
                int posValue=1;
            while(temp!=NULL){
                if(temp->value!=position){

                    posValue++;
                }
                temp = temp->Next;
            }
        return position;
}

void insertAtSpecificationPositon(Node* &head,int position,int val){

            Node* newNode = new Node(val);
           int  posi = findOutPosition(head,position);
            Node *temp = head;
            int i=1;
            while(i<posi){
                                    //1 2 4 5
            temp = temp->Next;
                i++;

                }
              Node* pre = temp->Next;
                temp->Next = newNode;
                newNode->Next = pre;

}

void display(Node* n){
        while(n!=NULL){
            cout<<n->value<<" ";
            n = n->Next;
        }
}

void SearchValue(Node* &head,int key){

        Node* temp = head;
        while(temp!=NULL){

            if(temp->value==key){
                cout<<temp->value<<endl;
            }

              temp = temp->Next;
        }
}


Node* reversLinkedListInItaretiveWay(Node* &head){

            Node* temp = head;
            Node* preptr =NULL;
            Node* current;

            while(temp!=NULL){

                current = temp->Next;
                temp->Next = preptr;

                preptr = temp;
                temp = current;

            }

            return preptr;

}

Node* reverseByRecusiveWay(Node* head){

        if(head==NULL || head->Next==NULL){
                return head;
        }

        Node* newHead = reverseByRecusiveWay(head->Next);

        head->Next->Next = head;
        head->Next = NULL;

        return newHead;
}


int main(){

        Node* head = NULL;

        int value,secValue;
        cout<<"choice 1: Insert at Tail: "<<endl
            <<"choice 2: Insert at Head: "<<endl
            <<"choice 3: Search to Value: "<<endl
            <<"choice 4: Given value to get position: "<<endl
            <<"choice 5: Insert at specific position: "<<endl
            <<"choice 6: For reversing value: "<<endl
            <<"choice 0: Exit"<<endl;

        int choice;
        cout<<endl<<"Next choice: ";
        cin>>choice;

        while(choice!=0){
           if(choice==1){
             cout<<"Enter the value: ";
            cin>>value;
            inputInLinkedList(head,value);
           }
           else if(choice==2){
                cout<<"Enter the value: ";
                cin>>value;
                insertAtHead(head,value);
           }
           else if(choice==3){
            cout<<"Enter the value to search: ";
            cin>>secValue;
            SearchValue(head,secValue);

           }
           else if(choice==4){
                cout<<"position value is: ";
                cin>>secValue;
               int position = findOutPosition(head,secValue);
               cout<<position<<endl;
           }
           else if(choice==5){
                cout<<"Given the position value: ";
                cin>>secValue;
                cout<<"Enter the value to input: ";
                cin>>value;

            insertAtSpecificationPositon(head,secValue,value);
           }
           else if(choice==6){

                Node* reverseVal = reverseByRecusiveWay(head);
                cout<<"reverse value is: ";
                display(reverseVal);
                cout<<endl;

           }
            cout<<"Next choice: ";
            cin>>choice;

        }

    display(head);

return 0;
}
