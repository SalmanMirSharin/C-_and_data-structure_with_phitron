
#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node* Next;

    Node(int val)
    {
        value = val;
        Next = NULL;
    }
};

struct Test
{

    int position[1000];

};

void insertionAtSpecificPosition(Node* &head,int pos,int val)
{
    int i = 0;
    Node* temp = head;

    while(i<pos-2)  //I didn't understand this loop:
    {
        temp = temp->Next;
        i++;
    }
    cout<<"i: "<<i<<endl;
    Node* newNode = new Node(val);
    newNode->Next = temp->Next;
    temp->Next = newNode;
}

void insertAtTail(Node* &head, int val)
{
    Node* newNode = new Node(val);
    if(head==NULL)
    {
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->Next!=NULL)
    {
        temp = temp->Next;
    }
    temp->Next = newNode;
}

void insertAtHead(Node* &head,int val)
{
    Node* newNode = new Node(val);
    newNode->Next = head;
    head = newNode;
}

void display(Node* n)
{
    while(n!=NULL)
    {
        cout<<n->value;
        if(n->Next!=NULL)
        {
            cout<<"->";
        }
        n = n->Next;
    }
    cout<<endl;
}

int countLength(Node* head)
{
    int count = 0;
    Node* temp = head;
    while(temp!=NULL)
    {
        count++;
        temp = temp->Next;
    }
    return count;
}

int searchByValueUnique(Node* &head,int key)
{
    Node* temp =head;
    int count = 1;
    if(temp==NULL)
    {
        return -1;
    }
    while(temp->value!=key)
    {
        if(temp->Next==NULL)
        {
            return -1;
        }
        temp = temp->Next;
        count++;
    }
    return count;
}

void searchByValueDuplicate(Node* &head,int key)
{
    Node* temp = head;
    int size;
    size =countLength(head);
    int position[size+1], k=1;
    int count = 1;
    int flag =0;

    while(temp!=NULL)
    {
        if(temp->value==key)
        {
//                    cout<<count<<" ";
            position[k] =count;
            k++;
            flag=1;
        }
        count++;
        temp = temp->Next;

    }

    if(flag==0) cout<<"The search value is not yet in this list!";

    else
    {
        position[0]=k;
        cout<<"The value is found at position: ";
        for(int i=1; i<position[0]; i++)
        {
            cout<<position[i];
            if(i<position[0]-1) cout<<",";
        }
        cout<<endl;
    }
}


Test searchByValueDuplicateReturn(Node* &head,int key)
{

    Node* temp = head;
    int count = 1;
    int k =1;
    Test T;

    while(temp!=NULL)
    {
        if(temp->value==key)
        {
            //cout<<count;
            T.position[k] = count;
            k++;
        }
        count++;
        temp = temp->Next;
    }
    T.position[0]=k;

    return T;

}

void searchByValueUniqueAfter(Node* &head,int searchValue,int value)
{

    int position;
    position = searchByValueUnique(head,searchValue);
    insertionAtSpecificPosition(head,position+1,value);
}

void deletionAtHead(Node* &head)
{
    Node* temp = head;

    if(temp!=NULL)
    {
        head = temp->Next;
        delete temp;
    }
    else
    {
        cout<<"There is no value in this Linked list!"<<endl;
    }
}

void deletionAtTail(Node* &head)
{

    Node* temp = head;

    if(temp!=NULL && temp->Next!=NULL)
    {
        while(temp->Next->Next!=NULL)
        {

            temp = temp->Next;
        }
        Node* delNode = temp->Next;
        temp->Next = NULL;
        delete delNode;

    }
    else
    {
        if(temp==NULL) cout<<"There is no value in the linked list!"<<endl;
        else deletionAtHead(head);

    }


}


void deletionAtSpecificationPosition(Node* &head,int position)
{
    Node* temp = head;
    if(position<=countLength(head))
    {
        if(position==1)
        {
            deletionAtHead(head);
        }
        else if(position==countLength(head))
        {
            deletionAtTail(head);
        }
        else
        {
            int i=1;
            while(i<position-1)
            {
                temp = temp->Next;
                i++;
            }
            Node* delNode = temp->Next;
            temp->Next = delNode->Next;
            delete delNode;
        }


    }
    else
    {
//        if(position>countLength(head))
//        {
            cout<<"Position out of Bound"<<endl;
//        }
//        else{
//             cout<<"There is no value in the linked list!"<<endl;
//        }

    }

}

void deletionByValueUnique(Node* &head,int value){

            int position;
            position = searchByValueUnique(head,value);
                if(position==-1){
                cout<<"Position Not Found in the Linked List!"<<endl;
            }
            else{
                deletionAtSpecificationPosition(head,position);
            }
}



int main()
{

    Node* head = NULL;

    int value,position;

    cout<<"choice 1: to insert at Head: "<<endl
        <<"choice 2: insert at Tail: "<<endl
        <<"choice 3: add position value: "<<endl
        <<"choice 4: search(Unique List): "<<endl
        <<"choice 5: search(Duplication List): "<<endl
        <<"choice 6: Insertion after a specific value(Unique List): "<<endl
        <<"choice 7: Deletion at Head: "<<endl
        <<"choice 8: Deletion at Tail: "<<endl
        <<"choice 9: Deletion at specific position: "<<endl
        <<"choice 10: Deletion by value(unique List): "<<endl
        <<"choice 0: Exit: "<<endl<<endl;

    int choice;
    cout<<"Next choice: ";
    cin>>choice;
    while(choice!=0)
    {

        switch(choice)
        {
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
            if(position!=-1)
            {
                cout<<"The Number at Position: "<<position<<endl;
            }
            else
            {
                cout<<"The Number is not yet in the List"<<endl;
            }
            break;
        case 5:
            cout<<"Enter the value to search: ";
            cin>>value;
            //searchByValueDuplicate(head,value);
            Test T;
            T =searchByValueDuplicateReturn(head,value);
            if(T.position[0]==1)
            {
                cout<<"The search value is not yet in this list!"<<endl;
            }
            else
            {
                int size = T.position[0];
                cout<<"The value is found at position: ";
                for(int i=1; i<size; i++)
                {
                    cout<<T.position[i];
                    if(i<size-1)
                    {
                        cout<<", ";
                    }

                }
                cout<<endl;
            }
            break;
        case 6:
            cout<<"Enter the value to seach: ";
            int searchValue;
            cin>>searchValue;
            cout<<"Enter the value to insert: ";
            cin>>value;
            searchByValueUniqueAfter(head,searchValue,value);
            break;
        case 7:
            deletionAtHead(head);
            break;
        case 8:

            deletionAtTail(head);
            break;
        case 9:
            if(head==NULL){
                cout<<"There is no value in the linked list!"<<endl;
                break;
            }
            cout<<"Enter the desired position to delete: ";
            cin>>position;
            deletionAtSpecificationPosition(head,position);
//            cout<<endl;
//            display(head);
            break;
        case 10:
            cout<<"Enter the value to delete: ";
            int delValue;
            cin>>delValue;
            deletionByValueUnique(head,delValue);
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

