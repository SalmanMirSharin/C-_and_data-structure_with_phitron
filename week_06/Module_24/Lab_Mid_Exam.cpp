// Solve-1:
//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//
//    int n;
//    cin>>n;
//    int ar[n];
//    int Count[1000]={0};
//
//    for(int i=0; i<n; i++){
//        cin>>ar[i];
//
//         Count[ar[i]]++;
//    }
//            cout<<endl;
//    for(int i=0; i<1000; i++){
//
//            if(Count[i]!=0){
//                cout<<i<<" => "<<Count[i]<<endl;
//            }
//
//    }
//
//
//return 0;
//}



//solve:-2
//#include<bits/stdc++.h>
//using namespace std;
//
//void Copy(int a[],int b[],int Count[],int n,int m,int siz){
//
//        int x,y;
//       int marge[siz];
//
//       for( x=0; x<n; x++){
//
//            marge[x] = a[x];
//
//       }
//        y=x;
//        for( x=0; x<m; x++){
//
//            marge[y] = b[x];
//            y++;
//        }
//
//       for(int i=0; i<siz; i++){
//
//
//            Count[marge[i]]++;
//        }
//    cout<<endl;
//}
//
//int main(){
//
//    int n,m;
//    cin>>n;
//    int a[n];
//
//    for(int i=0; i<n; i++){
//        cin>>a[i];
//    }
//
//    cin>>m;
//    int b[m];
//
//        for(int i=0; i<m; i++){
//        cin>>b[i];
//    }
//    int B[m];
//    for(int i=0; i<m; i++){
//            B[i] = b[i];
//    }
//
//
//    int Count[1000]={0};
//    int siz = m+n;
//
//    Copy(a,B,Count,n,m,siz);
//
//        int k=0;
//        int ar[k];
//    for(int i=0; i<1000; i++){
//
//            if(Count[i]!=0){
//                if(Count[i]==1){
//                   ar[k] = i;
//                   k++;
//                }
//            }
//    }
//
//    int L=0;
//    int common_value[L];
//    for(int i=0; i<m; i++){
//
//        for(int j=0; j<k; j++){
//            if(b[i]==ar[j]){
//            common_value[L] = b[i];
//                L++;
//            }
//        }
//    }
//
//
//    int again_count[1000]={0};
//        int si = L+k;
//    Copy(ar,common_value,again_count,k,L,si);
//
//        for(int i=0; i<1000; i++){
//            if(again_count[i]!=0){
//                if(again_count[i]==1){
//                    cout<<i<<" ";
//                }
//
//            }
//    }
//
//return 0;
//}




//Sove-2: perfectly:
//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//
//    int n,m;
//    cin>>n;
//    int a[n];
//
//    for(int i=0; i<n; i++){
//
//        cin>>a[i];
//    }
//
//    cin>>m;
//    int b[m];
//
//    for(int i=0; i<m; i++){
//        cin>>b[i];
//    }
//
//
//    for(int i=0; i<n; i++){
//
//        for(int j=0; j<m; j++){
//            if(a[i]==b[j]){
//               a[i]= -1;
//
//            }
//        }
//    }
//
//    for(int i=0; i<n; i++){
//
//        if(a[i]!=-1){
//            cout<<a[i]<<" ";
//        }
//    }
//
//return 0;
//}



//Solve-3:
//#include<bits/stdc++.h>
//using namespace std;
//
//void n_number_test_case(){
//
//    int n,q;
//    cin>>n;
//    int ar[n];
//    int br[n];
//    int pre[n];
//    int qre[n];
//
//    for(int i=0; i<n; i++){
//        cin>>ar[i];
//    }
//
//    for(int i=0; i<n; i++){
//        cin>>br[i];
//    }
//
//    pre[0] = ar[0];
//    for(int i=1; i<n; i++){
//        pre[i]= ar[i]+pre[i-1];
//    }
//
//    qre[0] = br[0];
//    for(int i=1; i<n; i++){
//        qre[i]= br[i]+qre[i-1];
//    }
//
//    cin>>q;
//    int x[q];
//
//    for(int i=0; i<q; i++){
//            cin>>x[i];
//    }
//
//    int l=0;
//    int stor[l];
//
//      for(int i=0; i<n; i++){
//          for(int j=0; j<q; j++){
//                if(x[j]==i){
//                   stor[l] = pre[i]-qre[i];
//                   l++;
//                }
//          }
//    }
//
//    for(int i=0; i<l; i++){
//        if(stor[i]<0){
//            cout<<"0 ";
//        }
//        else{
//            cout<<"1 ";
//        }
//    }
//    cout<<endl;
//}
//
//int main(){
//    int t;
//    cin>>t;
//
//    for(int test=0; test<t; test++){
//
//        n_number_test_case();
//    }
//
//return 0;
//}

//
//
//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//
//    int row,col;
//    cin>>row>>col;
//
//    int m[row][col];
//
//
//    for(int i=0; i<row; i++){
//        for(int j=0; j<col; j++){
//
//                cin>>m[i][j];
//        }
//
//    }
//
//    int Count[1000]={0};
//    for(int i=0; i<row; i++){
//        for(int j=0; j<col; j++){
//
//                //cout<<m[i][j]<<" ";
//                Count[m[i][j]]++;
//        }
//        cout<<endl;
//    }
//    int du=0;
//    int dup[du];
//
//    for(int i=0; i<1000; i++){
//            if(Count[i]!=0){
//                if(Count[i]>1){
//                   dup[du]=i;
//                   du++;
//                }
//
//            }
//    }
////
////        for(int i=0; i<1000; i++){
////            if(Count[i]!=0){
////                cout<<i<<" ";
////            }
////    }
//
//        for(int i=0; i<row; i++){
//        for(int j=0; j<col; j++){
//            for(int l=0; l<du; l++){
//                 if( m[i][j]==dup[l]){
//                        //cout<<m[i][j]<<" ";
//                        m[i][j] = -1;
//                 }
//            }
//
//        }
//
//    }
//
//        for(int i=0; i<row; i++){
//            for(int j=0; j<col; j++){
//
//                cout<<m[i][j]<<" ";
//        }
//
//    }
//
//return 0;
//}



//Solve: 6:
//
//#include<bits/stdc++.h>
//using namespace std;
//
//class Node{
//
//public:
//    int value;
//    Node* Next;
//
//    Node(int val){
//        value = val;
//        Next = NULL;
//    }
//
//};
//
//void Insert(Node* &head,int val){
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
//
//            temp = temp->Next;
//        }
//        temp->Next = newNode;
//}
//
//void display(Node* head){
//        Node* temp = head;
//
//        while(temp!=NULL){
//            cout<<temp->value;
//            if(temp->Next!=NULL){
//                cout<<"->";
//            }
//            temp = temp->Next;
//        }
//        cout<<endl;
//}
//
//int main(){
//
//    Node* head = NULL;
//    int n, value;
//    cin>>n;
//
//    for(int i=0; i<n; i++){
//            cin>>value;
//            if(value%2==0){
//                value=-1;
//            }
//         Insert(head, value);
//    }
//
//    display(head);
//
//return 0;
//}



//Solve-7:
//#include<bits/stdc++.h>
//using namespace std;
//
//class Node{
//
//public:
//    int value;
//    Node* Next;
//
//    Node(int val){
//        value = val;
//        Next = NULL;
//    }
//
//};
//
//Node* Reversek(Node* head, int k){
//
//        Node* pre = NULL;
//        Node* curr = head;
//        Node* next;
//        int Count=0;
//
//        Node* nul =NULL;
//        if(k==0){
//            return nul;
//        }
//        while(curr!=NULL && Count<k){
//
//            next = curr->Next;
//            curr->Next = pre;
//
//            pre = curr;
//            curr =next;
//            Count++;
//        }
//        if(next!=NULL){
//            head->Next = Reversek(next,k);
//        }
//
//        return pre;
//
//}
//
//void Insert(Node* &head, int val){
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
//
//            temp =temp->Next;
//        }
//        temp->Next = newNode;
//}
//
//void display(Node* head){
//
//    Node* temp = head;
//
//    while(temp!=NULL){
//        cout<<temp->value;
//        if(temp->Next!=NULL){
//            cout<<"->";
//        }
//        temp = temp->Next;
//    }
//    cout<<endl;
//}
//
//int main(){
//
//    Node* head = NULL;
//
//    int n,value;
//    cin>>n;
//
//    for(int i=0; i<n; i++){
//            cin>>value;
//        Insert(head,value);
//    }
//
//    int k;
//    cin>>k;
//
//    Node* rever = Reversek(head,k);
//
//    display(rever);
//
//return 0;
//}




//Solve-8:
//#include<bits/stdc++.h>
//using namespace std;
//
//class Node{
//
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
//void Insert(Node* &head, int val){
//        Node* newNode = new Node(val);
//
//        if(head==NULL){
//            head = newNode;
//            return;
//        }
//
//        Node* temp = head;
//
//    while(temp->Next!=NULL){
//            temp = temp->Next;
//    }
//    temp->Next = newNode;
//}
//
//
//void skipMdeleteN(Node *head, int m, int n) {
//
//        Node *current = head, *temp;
//            int Count;
//
//      if (current == NULL) {
//         return;
//      }
//
//      if(current->Next==NULL){
//            head;
//            return;
//      }
//
//        Count=1;
//      while(current!=NULL && Count<m){
//            current = current->Next;
//            Count++;
//      }
//
//      temp = current->Next;
//
//      for (Count = 1; Count <= n && temp != NULL; Count++) {
//         Node *delNode = temp;
//         temp = temp->Next;
//         delete delNode;
//      }
//      current->Next = temp;
//      current = temp;
//
//    skipMdeleteN(current,m,n);
//
//   }
//
//void display(Node* head){
//
//    Node* temp = head;
//
//    while(temp!=NULL){
//        cout<<temp->value;
//        if(temp->Next!=NULL){
//            cout<<"->";
//        }
//        temp = temp->Next;
//    }
//
//    cout<<endl;
//}
//
//int main(){
//
//    Node* head = NULL;
//
//    int k,value,m,n;
//    cin>>k>>m>>n;
//
//    for(int i=0; i<k; i++){
//            cin>>value;
//        Insert(head,value);
//    }
//
//
//    skipMdeleteN(head,m,n);
//      display(head);
//
//
//return 0;
//}
//


//Problem 10 header file:
//#include<bits/stdc++.h>
//using namespace std;
//
//class Node{
//public:
//
//    int value;
//    Node* Next;
//    Node* pre;
//
//    Node(int val){
//        value = val;
//        Next = NULL;
//        pre = NULL;
//    }
//};
//
//class Stack{
//
//    Node* head;
//    Node* top;
//    int Count =0;
//
//public:
//    Stack(){
//        head = NULL;
//        top = NULL;
//    }
//
//    //PUSH:
//    void Push(int val){
//        Node* newNode = new Node(val);
//        if(head==NULL){
//            head=top=newNode;
//             Count++;
//            return;
//        }
//       top->Next = newNode;
//       newNode->pre = top;
//       top = newNode;
//        Count++;
//    }
//    //POP:
//    int Pop(){
//        Node* delNode;
//        delNode = top;
//        int chk=-1;
//        if(head==NULL){
//            cout<<"Stack Underflow"<<endl;
//            return chk;
//        }
//
//        if(head==top){
//            head=top=NULL;
//        }
//        else{
//            top = delNode->pre;
//            top->Next = NULL;
//        }
//        chk = delNode->value;
//        delete delNode;
//        Count--;
//        return chk;
//    }
//    //EMPTY:
//    bool Empty(){
//        if(head==NULL) return true;
//        else return false;
//    }
//    //SIZE:
//    int Size(){
//        return Count;
//    }
//    //TOP:
//    int Top(){
//        if(top==NULL){
//            cout<<"Stack Underflow | There is no value"<<endl;
//        }
//        else{
//            return top->value;
//        }
//    }
//};
//
//int main(){
//
//
//
//return 0;
//}










