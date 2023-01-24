//problem:-1:

//#include<bits/stdc++.h>
//using namespace std;
//
//class Node{
//public:
//
//    int data;
//    Node* left;
//    Node* right;
//
//    Node(int val){
//        data = val;
//        left = NULL;
//        right = NULL;
//    }
//};
//
//void preorder(Node* root){
//    if(root==NULL){
//        return;
//    }
//    cout<<root->data<<" ";
//    preorder(root->left);
//    preorder(root->right);
//
//}
//
//void inorder(Node* root){
//    if(root==NULL){
//        return;
//    }
//    inorder(root->left);
//    cout<<root->data<<" ";
//    inorder(root->right);
//}
//
//void postorder(Node* root){
//    if(root==NULL){
//        return;
//    }
//    postorder(root->left);
//    postorder(root->right);
//    cout<<root->data<<" ";
//}
//
//void level_order(Node* root){
//        if(root==NULL){
//            return;
//        }
//        queue<Node*>q;
//        q.push(root);
//        q.push(NULL);
//
//        while(!q.empty()){
//            Node* Node = q.front();
//            q.pop();
//            if(Node!=NULL){
//                cout<<Node->data<<" ";
//                if(Node->left!=NULL){
//                    q.push(Node->left);
//                }
//                if(Node->right!=NULL){
//                    q.push(Node->right);
//                }
//            }
//            else if(!q.empty()){
//                q.push(NULL);
//            }
//        }
//        cout<<endl;
//}
//
//void InputBinayTree(Node* &root){
//    int a;
//    cin>>a;
//
//    root = new Node(a);
//
//        queue<Node*>q;
//        q.push(root);
//
//        while(!q.empty()){
//            Node* presentNode = q.front();
//            q.pop();
//            int x,y;
//            cin>>x>>y;
//            Node* n1 = NULL;
//            Node* n2 = NULL;
//            if(x!=-1) n1 = new Node(x);
//            if(y!=-1) n2 = new Node(y);
//
//            presentNode->left = n1;
//            presentNode->right = n2;
//
//            if(n1!=NULL) q.push(n1);
//            if(n2!=NULL) q.push(n2);
//        }
//}
//
//
//int main(){
//
//    Node* root = NULL;
//
//    InputBinayTree(root);
//    cout<<"PreOrder: ";
//    preorder(root);
//    cout<<endl;
//    cout<<"InOrder: ";
//    inorder(root);
//    cout<<endl;
//    cout<<"PostOrder: ";
//    postorder(root);
//    cout<<endl;
//    cout<<"LevelOrder: ";
//    level_order(root);
//
//return 0;
//}
//
//
///*
//15
//11 26
//8 12 20 30
//6 9 -1 14 -1 -1 -1 35
//-1 -1 -1 -1 -1 -1 -1 -1
//*/






#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b){
    int temp;
    temp =*a;
    *a = *b;
    *b = temp;
}
void printArray(int arr[],int n);
void heapify(int arr[],int n, int current){
    int largest = current;
    int left = 2*current+1;
    int right = 2*current+2;

    if(left<n && arr[left]<arr[largest]){
        largest = left;
    }

    if(right<n && arr[right]<arr[largest]){
        largest = right;
    }

    if(largest!=current){
        swap(arr[current],arr[largest]);
          printArray(arr,n);
        heapify(arr,n,largest);
    }
}

void printArray(int arr[],int n){
    cout<<endl;
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
    cout<<endl;
}

void heapsort(int arr[], int n){
        for(int i=n-1; i>=0; i--){
            swap(arr[0],arr[i]);
            //printArray(arr,n);
            heapify(arr,i,0);

        }
    cout<<endl;
}

int main(){

//    int n;
//    cin>>n;
    int n = 6;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int nonLeafStart = (n/2)-1;

    for(int i=nonLeafStart; i>=0; i--){

        heapify(arr,n,i);
    }

    cout<<"After the heap sort";
    heapsort(arr,n);
    printArray(arr,n);


return 0;
}
//
///*
//
//20 50 40 5 30 15
//
//*/





//#include<bits/stdc++.h>
//using namespace std;
//
//class Node{
//public:
//
//    int val;
//    Node* left;
//    Node* right;
//
//    Node(int value){
//        val = value;
//        left = NULL;
//        right = NULL;
//    }
//
//};
//
//void leftBoundary(Node* root){
//    if(root == NULL)
//        return;
//
//    if(root->left){
//        cout<<root->val<<" ";
//        leftBoundary(root->left);
//    }
//
//    else if(root->right){
//        cout<<root->val<<" ";
//        leftBoundary(root->right);
//    }
//}
//
//
//void rightBoundary(Node* root){
//
//    if(root== NULL)
//        return;
//
//    if(root->right != NULL){
//        rightBoundary(root->right);
//        cout<<root->val<<" ";
//    }
//
//    else if(root->left != NULL){
//        rightBoundary(root->left);
//        cout<<root->val<<" ";
//    }
//}
//
//void print_leaves(Node* root){
//    if(root == NULL)
//        return;
//
//    print_leaves(root->left);
//    if(root->left == NULL && root->right == NULL)
//            cout<<root->val<<" ";
//
//    print_leaves(root->right);
//
//}
//
//void boundary_traversal(Node* root){
//        if(root == NULL){
//            return;
//        }
//        cout<<root->val<<" ";
//        leftBoundary(root->left);
//        print_leaves(root->left);
//        print_leaves(root->right);
//        rightBoundary(root->right);
//
//}
//
//void InputBinayTree(Node* &root){
//    int a;
//    cin>>a;
//
//    root = new Node(a);
//
//        queue<Node*>q;
//        q.push(root);
//
//        while(!q.empty()){
//            Node* presentNode = q.front();
//            q.pop();
//            int x,y;
//            cin>>x>>y;
//            Node* n1 = NULL;
//            Node* n2 = NULL;
//            if(x!=-1) n1 = new Node(x);
//            if(y!=-1) n2 = new Node(y);
//
//            presentNode->left = n1;
//            presentNode->right = n2;
//
//            if(n1!=NULL) q.push(n1);
//            if(n2!=NULL) q.push(n2);
//        }
//}
//
//
//int main(){
//
//    Node* root = NULL;
//
//    InputBinayTree(root);
//
//    boundary_traversal(root);
//
//
//return 0;
//}


//15 11 8 6 9 14 20 35 30 26

/*
15
11 26
8 12 20 30
6 9 -1 14 -1 -1 -1 35
-1 -1 -1 -1 -1 -1 -1 -1

*/


















