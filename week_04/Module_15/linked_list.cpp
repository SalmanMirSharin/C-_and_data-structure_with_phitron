//
//#include<bits/stdc++.h>
//using namespace std;
//
//struct Node{
//
//    int data;
//    struct Node *next;
//
//};
//
//void linked_list_travarsal(struct Node* ptr){
//
//        while(ptr !=NULL){
//
//        cout<<ptr->data<<" ";
//        ptr = ptr->next;
//
//        }
//
//}
//
//int main(){
//
//    struct Node* head, *second, *third, *fourth;
//
//    //head = (int*)malloc(sizeof(int));
//    head = (struct Node*) malloc (sizeof(struct Node));
//    second = (struct Node*) malloc (sizeof(struct Node));
//    third = (struct Node*) malloc (sizeof(struct Node));
//    fourth = (struct Node*) malloc (sizeof(struct Node));
//
//    head->data = 7;
//    head->next = second;
//
//    second->data = 10;
//    second->next = third;
//
//    third->data = 15;
//    third->next = fourth;
//
//    fourth->data = 20;
//    fourth->next = NULL;
//
//
//    linked_list_travarsal(head);
//
//    int ar[5];
//
//
//return 0;
//}




//#include<bits/stdc++.h>
//using namespace std;
//
//class Node{
//
//public:
//    int value;
//    Node* Next;
//
//};
//
//void display(Node* n){
//
//     while(n!=NULL){
//            cout<<n->value;
//            if(n->Next!=NULL){
//                cout<<"->";
//            }
//           n->Next--;
//     }
//
//
//}
//
//int main(){
//
//    Node* head = new Node();
//    Node* second = new Node();
//    Node* third = new Node();
//    Node* fourth = new Node();
//
//    head->value = 1;
//    second->value = 5;
//    third->value = 10;
//    fourth->value = 15;
//
//    head->Next = second;
//    second->Next = third;
//    third->Next = fourth;
//    fourth->Next =NULL;
//
//
//    display(head);
//
//
//return 0;
//}


//
//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//
//    int *ptr = new int[10]{0};
//
//    for(int i=0; i<10; i++){
//        cout<<ptr[i]<<endl;
//    }
//
//    delete ptr;
//
//return 0;
//}



//
//#include<bits/stdc++.h>
//using namespace std;
//
//void pr(int* a){
//
//   cout<<*a;
//
//}
//
//int main(){
//
////    int a = 10;
////
////    int *b =&a;
////
////    *b = 50;
////    pr(b);
////    cout<<endl;
////    cout<<&b<<endl;
//
//    int x =10;
//    int* ptr = &x;
//
//    pr(ptr);
//
//
//
//
//
//return 0;
//}


//
//Basic Linked list creation:
//
//#include<bits/stdc++.h>
//using namespace std;
//
//class Node{
//
//public:
//    int value;
//    Node *Next;
//
//};
//
//void display(Node *n){
//
//        while(n!=NULL){
//            cout<<n->value;
//
//            if(n->Next!=NULL){
//                cout<<"->";
//            }
//            n=n->Next;
//        }
//
//}
//
//int main(){
//
//    Node *head = new Node();
//    Node *second = new Node();
//    Node *third = new Node();
//    Node *fourth = new Node();
//
//
//   head->value = 1;
//   second->value = 5;
//   third->value = 8;
//   fourth->value = 9;
//
//   head->Next = second;
//   second->Next = third;
//   third->Next = fourth;
//   fourth->Next = NULL;
////
////   cout<<head->value;
//    display(head);
//
//
//return 0;
//}



//Linked list tail insertion system:

#include<bits/stdc++.h>
using namespace std;

class Node{

public:

    int value;
    Node *Next;

    Node(int val){
        value = val;
        Next = NULL;

    }

};

void insertAtTail(Node* &head, int val){
    Node *newNode = new Node(val);

    if(head==NULL){
        head = newNode;
        return;
    }

    Node *temp = head;

    while(temp->Next!=NULL){
        temp = temp->Next;
    }
    temp->Next = newNode;
}

void display(Node *n){

        while(n!=NULL){
            cout<<n->value;

            if(n->Next!=NULL){
                cout<<"->";
            }
            n = n->Next;
        }

    cout<<endl;
}

Node *reversedListPrint(Node *head){
        Node* previous = NULL;
        Node* current = head;
        Node* Nextptr;

        while(current!=NULL){
            Nextptr = current->Next;
            current->Next = previous;

            previous = current;
            current = Nextptr;
        }
    return previous;
}

int main(){

        Node *head = NULL;

        int n;

        char choice = 'Y';

        while(toupper(choice)=='Y'){
        cout<<"Enter the value: ";
        cin>>n;
        insertAtTail(head,n);

        cout<<"Do you want to continue: (Y/N) ";
        cin>>choice;

        }

            display(head);

        cout<<"After reversing: ";

        Node* newhead = reversedListPrint(head);
        display(newhead);

return 0;
}




//#include<bits/stdc++.h>
//using namespace std;
//
//class Node{
//
//public:
//    int value;
//    Node *Next;
//
//    Node(int val){
//        value = val;
//        Next = NULL;
//
//    }
//};
//
//void insertAtTail(Node* &head,int val){
//
//    Node* newNode = new Node(val);
//
//    if(head==NULL){
//        head = newNode;
//        return;
//    }
//    Node *temp = head;
//    while(temp->Next!=NULL){
//       temp = temp->Next;
//    }
//    temp->Next = newNode;
//
//}
//
//void insertAtHead(Node* &head, int val){
//
//        Node* newNode = new Node(val);
//
//        newNode->Next = head;
//        head = newNode;
//
//}
//
//void display(Node* n){
//
//    while(n!=NULL){
//            cout<<n->value<<" ";
//
//        n = n->Next;
//    }
//
//}
//
//
//int main(){
//
//
//    Node *head = NULL;
//
//    int n;
//
//    cout<<"choice 1: Insertion of head"<<endl<<"choice 2: Insertion of Tail"<<endl<<"choice 3: for Exit"<<endl;
//
//    int choice = 2;
//    while(choice==1 || choice==2){
//            cout<<"Enter the value: ";
//            cin>>n;
//            if(choice==1) insertAtHead(head,n);
//            else if(choice==2) insertAtTail(head,n);
//
//         cout<<"Choice Next: ";
//         cin>>choice;
//    }
//
//    display(head);
//
//return 0;
//}
//





























