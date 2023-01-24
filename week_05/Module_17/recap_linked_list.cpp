
//Head, Tail, Length:

//#include<bits/stdc++.h>
//using namespace std;
//
//class Node{
//public:
//    int value;
//    Node* Next;
//
//    Node(int val){
//        value = val;
//        Next = NULL;
//    }
//};
//
//void insertAtTail(Node* &head, int val){
//        Node* newNode = new Node(val);
//        if(head==NULL){
//            head = newNode;
//            return;
//        }
//        Node* temp = head;
//        while(temp->Next!=NULL){
//            temp = temp->Next;
//        }
//        temp->Next = newNode;
//}
//
//void insertAtHead(Node* &head,int val){
//        Node* newNode = new Node(val);
//        newNode->Next = head;
//        head = newNode;
//}
//
//void display(Node* n){
//    while(n!=NULL){
//        cout<<n->value;
//
//        if(n->Next!=NULL){
//            cout<<"->";
//        }
//        n = n->Next;
//    }
//    cout<<endl;
//}
//
//int countLength(Node* head){
//        int count = 0;
//        Node* temp = head;
//        while(temp!=NULL){
//            count++;
//        temp = temp->Next;
//        }
//    return count;
//}
//
//int main(){
//
//    Node* head = NULL;
//
//    int value;
//
//    cout<<"choice 1: to insert at Head: "<<endl
//    <<"choice 2: to insert at Tail: "<<endl
//    <<"choice 0:to Exit: "<<endl<<endl;
//
//        int choice;
//        choice =2;
//    while(choice!=0){
//
//            cout<<"Enter the value: ";
//            cin>>value;
//
//            switch(choice){
//            case 1:
//                insertAtHead(head,value);
//                break;
//            case 2:
//                insertAtTail(head,value);
//                break;
//            default:
//                break;
//            }
//        cout<<"Next choice: ";
//        cin>>choice;
//
//    }
//
//    cout<<endl<<"Linked List: ";
//    display(head);
//    cout<<"Leangth of the list: "<<countLength(head)<<endl;
//
//return 0;
//}



//Insertion at specific position:

//#include<bits/stdc++.h>
//using namespace std;
//
//class Node{
//public:
//    int value;
//    Node* Next;
//
//    Node(int val){
//        value = val;
//        Next = NULL;
//    }
//};
//
//void insertionAtSpecificPosition(Node* &head,int pos,int val){
//            int i = 0;
//            Node* temp = head;
//
//            while(i<pos-2){ //I didn't understand this loop:
//                temp = temp->Next;
//                i++;
//            }
//        cout<<"i: "<<i<<endl;
//       Node* newNode = new Node(val);
//       newNode->Next = temp->Next;
//       temp->Next = newNode;
//
//
//}
//
//void insertAtTail(Node* &head, int val){
//        Node* newNode = new Node(val);
//        if(head==NULL){
//            head = newNode;
//            return;
//        }
//        Node* temp = head;
//        while(temp->Next!=NULL){
//            temp = temp->Next;
//        }
//        temp->Next = newNode;
//}
//
//void insertAtHead(Node* &head,int val){
//        Node* newNode = new Node(val);
//        newNode->Next = head;
//        head = newNode;
//}
//
//void display(Node* n){
//    while(n!=NULL){
//        cout<<n->value;
//
//        if(n->Next!=NULL){
//            cout<<"->";
//        }
//        n = n->Next;
//    }
//    cout<<endl;
//}
//
//int countLength(Node* head){
//        int count = 0;
//        Node* temp = head;
//        while(temp!=NULL){
//            count++;
//        temp = temp->Next;
//        }
//    return count;
//}
//
//int searchByValueUnique(Node* &head,int key){
//            Node* temp =head;
//            int count = 1;
//            while(temp->value!=key){
//            if(temp->Next==NULL){
//                return -1;
//            }
//                temp = temp->Next;
//                count++;
//            }
//            return count;
//}
//
//int main(){
//
//    Node* head = NULL;
//
//    int value,position;
//
//    cout<<"choice 1: to insert at Head: "<<endl
//    <<"choice 2: to insert at Tail: "<<endl
//    <<"choice 3: to add position value: "<<endl
//    <<"choice 4: to search(Unique List): "<<endl
//    <<"choice 0:to Exit: "<<endl<<endl;
//
//        int choice;
//        cout<<"Next choice: ";
//        cin>>choice;
//    while(choice!=0){
//
//            switch(choice){
//            case 1:
//                cout<<"Enter the value: ";
//                cin>>value;
//                insertAtHead(head,value);
//                break;
//            case 2:
//
//                cin>>value;
//                insertAtTail(head,value);
//                break;
//            case 3:
//                cout<<"Enter the desired Position: ";
//                cin>>position;
//                cout<<"Enter the value: ";
//                cin>>value;
//                insertionAtSpecificPosition(head,position,value);
//                break;
//            case 4:
//                cout<<"Enter the value to search: ";
//                cin>>value;
//                position = searchByValueUnique(head,value);
//                if(position!=-1){
//                    cout<<"The Number at Position: "<<position<<endl;
//                }
//                else{
//                    cout<<"The Number is not yet in the List"<<endl;
//                }
//                break;
//
//            default:
//                break;
//            }
//        cout<<"Next choice: ";
//        cin>>choice;
//
//    }
//
//    cout<<endl<<"Linked List: ";
//    display(head);
//    cout<<"Leangth of the list: "<<countLength(head)<<endl;
//
//return 0;
//}



//Search Duplicate value from Linked List:
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

void insertionAtSpecificPosition(Node* &head,int pos,int val){
            int i = 0;
            Node* temp = head;

            while(i<pos-2){ //I didn't understand this loop:
                temp = temp->Next;
                i++;
            }
        cout<<"i: "<<i<<endl;
       Node* newNode = new Node(val);
       newNode->Next = temp->Next;
       temp->Next = newNode;


}

void insertAtTail(Node* &head, int val){
        Node* newNode = new Node(val);
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

void insertAtHead(Node* &head,int val){
        Node* newNode = new Node(val);
        newNode->Next = head;
        head = newNode;
}

void display(Node* n){
    while(n!=NULL){
        cout<<n->value;

        if(n->Next!=NULL){
            cout<<"->";
        }
        n = n->Next;
    }
    cout<<endl;
}

int countLength(Node* head){
        int count = 0;
        Node* temp = head;
        while(temp!=NULL){
            count++;
        temp = temp->Next;
        }
    return count;
}

int searchByValueUnique(Node* &head,int key){
            Node* temp =head;
            int count = 1;
            if(temp==NULL){
                return -1;
            }
            while(temp->value!=key){
            if(temp->Next==NULL){
                return -1;
            }
                temp = temp->Next;
                count++;
            }
            return count;
}

void searchByValueDuplicate(Node* &head,int key){
            Node* temp = head;
            int size;
            size =countLength(head);
            int position[size+1], k=1;
            int count = 1;
            int flag =0;

            while(temp!=NULL){
                if(temp->value==key){
//                    cout<<count<<" ";
                    position[k] =count;
                    k++;
                    flag=1;
                }
                count++;
                temp = temp->Next;

            }

            if(flag==0) cout<<"The search value is not yet in this list!";

            else{
                position[0]=k;
                cout<<"The value is found at position: ";
                for(int i=1; i<position[0]; i++){
                        cout<<position[i];
                        if(i<position[0]-1) cout<<",";
                }
                cout<<endl;
            }


}


int main(){

    Node* head = NULL;

    int value,position;

    cout<<"choice 1: to insert at Head: "<<endl
    <<"choice 2: to insert at Tail: "<<endl
    <<"choice 3: to add position value: "<<endl
    <<"choice 4: to search(Unique List): "<<endl
    <<"choice 5: to search(Duplication List): "<<endl
    <<"choice 0:to Exit: "<<endl<<endl;

        int choice;
        cout<<"Next choice: ";
        cin>>choice;
    while(choice!=0){

            switch(choice){
            case 1:
                cout<<"Enter the value: ";
                cin>>value;
                insertAtHead(head,value);
                break;
            case 2:
                cout<<"Enter the value: ";
                cin>>value;
                insertAtTail(head,value);
                break;
            case 3:
                cout<<"Enter the desired Position: ";
                cin>>position;
                cout<<"Enter the value: ";
                cin>>value;
                insertionAtSpecificPosition(head,position,value);
                break;
            case 4:
                cout<<"Enter the value to search: ";
                cin>>value;
                position = searchByValueUnique(head,value);
                if(position!=-1){
                    cout<<"The Number at Position: "<<position<<endl;
                }
                else{
                    cout<<"The Number is not yet in the List"<<endl;
                }
                break;
            case 5:
                cout<<"Enter the value to search: ";
                cin>>value;
                searchByValueDuplicate(head,value);
                cout<<endl;
                break;
            default:
                break;
            }
        cout<<"Next choice: ";
        cin>>choice;

    }

    cout<<endl<<"Linked List: ";
    display(head);
    cout<<"Leangth of the list: "<<countLength(head)<<endl;

return 0;
}















