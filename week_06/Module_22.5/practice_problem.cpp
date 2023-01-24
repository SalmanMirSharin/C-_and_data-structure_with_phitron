//
//
//#include<bits/stdc++.h>
//using namespace std;
//
//class Node{
//
//public:
//
//    char value;
//    Node* Next;
//
//    Node(char val){
//        value = val;
//        Next = NULL;
//
//    }
//};
//
//void insertAtTail(Node* &head,char val){
//
//        Node* newNode = new Node(val);
//
//        if(head==NULL){
//            head = newNode;
//            return;
//        }
//
//        Node* temp = head;
//
//        while(temp->Next!=NULL){
//            temp = temp->Next;
//        }
//
//        temp->Next = newNode;
//}
//
//void display(Node* head){
//
//    Node* temp = head;
//
//    while(temp!=NULL){
//
//        cout<<temp->value;
//        temp= temp->Next;
//    }
//    cout<<endl;
//}
//
//Node* reverseLinkedList(Node* &head){
//
//        if(head==NULL || head->Next==NULL){
//                return head;
//        }
//
//        Node* newNode = reverseLinkedList(head->Next);
//
//            head->Next->Next = head;
//            head->Next =NULL;
//
//            return newNode;
//}
//
//bool checkPalindrom(Node* &head){
//
//        Node* slow = head;
//        Node* fast = head;
//
//        while(fast!=NULL && fast->Next!=NULL){
//
//                slow = slow->Next;
//                fast = fast->Next->Next;
//        }
//
//            Node* pre=NULL;
//            Node* next;
//            Node* cur =slow;
//
//            while(cur!=NULL){
//                next=cur->Next;
//                cur->Next = pre;
//                pre = cur;
//                cur = next;
//
//            }
//            fast =head;
//
//            while(pre!=NULL){
//
//               if(fast->value!=pre->value){
//                    return false;
//               }
//
//                pre = pre->Next;
//                fast = fast->Next;
//            }
//
//            return true;
//}
//
//
//int main(){
//
//    Node* head = NULL;
//
//    char value;
//        cout<<"choice 1: Inser at Tail!"<<endl
//            <<"choice 2: Reversing value!"<<endl
//            <<"choice 3: Check Palindrom!"<<endl
//            <<"choice 0: Exit!"<<endl;
//
//        cout<<endl;
//    int choice;
//    cout<<"Next choice: ";
//    cin>>choice;
//
//    while(choice!=0){
//
//    switch(choice){
//
//        case 1:
//            cout<<"Enter the character: ";
//            cin>>value;
//            insertAtTail(head,value);
//            break;
//        case 2:
//            Node* reverseList;
//            reverseList = reverseLinkedList(head);
//            display(reverseList);
//            break;
//        case 3:
//            bool palindrom;
//            palindrom = checkPalindrom(head);
//            if(palindrom==true){
//                cout<<"This list is palindrom!"<<endl;
//            }
//            else{
//                cout<<"This list is not palindrom!"<<endl;
//            }
//            break;
//        default:
//            break;
//    }
//
//        cout<<"Next choice: ";
//        cin>>choice;
//    }
//
//    display(head);
//
//
//return 0;
//}




#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* Next;

    Node(int val){
        this->val = val;
        this->Next = NULL;
    }

};

void insertAtHead(Node* &head, int val){
        Node* newNode = new Node(val);

            newNode->Next = head;
            head = newNode;

}

void inserAtTail(Node* &head, int val){
        Node*  newNode = new Node(val);

        if(head==NULL){
            head = newNode;
            return;
        }

        Node* temp = head;

        while(temp->Next!=NULL){

            temp = temp->Next;
        }

        temp->Next = newNode;
}

void insertAtmiddle(Node* &head, int pos, int val){
            Node* newNode = new Node(val);
            if(pos==1){
                Node* save = head;
                head = newNode;
                newNode->Next = save;
            }
            Node* temp = head;

            for(int i=1; i<pos-1; i++){

                temp = temp->Next;
            }

           Node* save_Next = temp->Next;
           temp->Next = newNode;
           newNode->Next = save_Next;
}

void Delete(Node* &head,int pos){

            if(pos==1){
//                Node* save = head;
                head = head->Next;
//                delete save;
                return;
            }
        Node* temp = head;

        for(int i=1; i<pos-1; i++){

            temp = temp->Next;
        }

        Node* save_next = temp->Next->Next;
        delete temp->Next;
        temp->Next = save_next;

}

void display(Node* head){

        Node* temp = head;

        while(temp!=NULL){
            cout<<temp->val;
            if(temp->Next!=NULL){
                cout<<"->";
            }
            temp = temp->Next;
        }
        cout<<endl;
}

int main(){

        Node* head =NULL;

        int value,position;

        cout<<"choice 1: Insert at Tail!"<<endl
            <<"choice 2: Display!"<<endl
            <<"choice 3: Insert at Head!"<<endl
            <<"choice 4: Insert value at middle!"<<endl
            <<"choice 5: Delete to list value!"<<endl
            <<"choice 0: Exit!"<<endl;


        cout<<endl<<"Next choice: ";

        int choice;

        cin>>choice;

    while(choice!=0){

        switch(choice){
            case 1:
                cout<<"Enter the value: ";
                cin>>value;
                inserAtTail(head,value);
                break;
            case 2:
                display(head);
                break;
            case 3:
                cout<<"Enter the value: ";
                cin>>value;
                insertAtHead(head, value);
                break;
            case 4:
                cout<<"Enter the position value: ";
                cin>>position;
                cout<<"Enter the value to insert: ";
                cin>>value;
                insertAtmiddle(head,position,value);
                break;
            case 5:
                cout<<"Enter the position value: ";
                cin>>position;
                Delete(head,position);
            default:
                break;

            }
            cout<<"choice Next: ";
            cin>>choice;
        }



return 0;
}


























