//
//#include<bits/stdc++.h>
//using namespace std;
//
//class Node{
//
//public:
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
//void bstInsertion(Node* &root, int val){
//        Node* newNode = new Node(val);
//        if(root==NULL){
//            root=newNode;
//            return;
//        }
//        if(val<root->data){
//           bstInsertion(root->left,val);
//        }
//        else if(val>root->data){
//           bstInsertion(root->right,val);
//        }
//}
//
//void in_traversal(Node* root){
//        if(root==NULL){
//            return;
//        }
//        in_traversal(root->left);
//        cout<<root->data<<" ";
//        in_traversal(root->right);
//}
//
////void bstSearch(Node* root,int val){
////        if(root==NULL){
////            return;
////        }
////        if(root->data==val){
////            cout<<root->data;
////            return;
////        }
////        if(val<root->data){
////            cout<<root->data<<"->";
////            bstSearch(root->left,val);
////        }
////        else{
////            cout<<root->data<<"->";
////            bstSearch(root->right,val);
////        }
////}
//
//string bstSearch(Node* root,int val,string sum){
//        if(root==NULL){
//            return NULL;
//        }
//        if(root->data==val){
//            //cout<<root->data;
//            sum =string(root->data);
//            return sum;
//        }
//        if(val<root->data){
//            //cout<<root->data<<"->";
//            sum+=bstSearch(root->left,val);
//        }
//        else{
//            //cout<<root->data<<"->";
//            sum+=bstSearch(root->right,val);
//        }
//        return sum;
//}
//
//int main(){
//
//    Node* root = NULL;
//    int n;
//    cin>>n;
//
//    for(int i=0; i<n; i++){
//        int val;
//        cin>>val;
//        bstInsertion(root,val);
//    }
//    in_traversal(root);
//    int key;
//    cin>>key;
//    string str ="";
//   str = bstSearch(root,key,str);
//
//   cout<<str;
//
//return 0;
//}


/*
5
5 4 7 8 1
*/



#include<iostream>
#include<queue>
#include<vector>
#include<stdlib.h>
using namespace std;
int main()
{
    int edges,a,b;
    vector<int>nodes[1000];
    cout<<"Enter the no of edges"<<endl;
    cin>>edges;
    for(int i=0; i<edges; i++)
    {
        cin>>a>>b;
        nodes[a].push_back(b);
        nodes[b].push_back(a);
    }

    cout<<endl;
    queue<int> que;
//initially que is empty
    bool visited[1000];
    int level[1000];
// mark all the vertices as not visited
    for(int i=0; i<1000; i++)
    {
        visited[i]=false;
    }
    int start;
    cout<<"\nEnter the starting node"<<endl;
    cin>>start;

//insert the starting node into the queue
    que.push(start);
    level[start]=1;
//mark the starting node as visited
    visited[start]=true;


    cout<<"\nBFS Traversal\n";

    while(!que.empty())
    {
        //Dequeue a vertex from que and print it
        int front = que.front();
        cout<<front<<" ";
        que.pop();
        // get all adjacent vertices of the dequeued vertex s
        // If an adjacent vertex has not been visited,
        //then mark it as visited
        // and enqueue it
        for(vector<int>::iterator it=nodes[front].begin();
                it!=nodes[front].end(); ++it)
        {

            if(visited[*it]==false)
            {
                visited[*it]=true;
                que.push(*it);
            }
        }
       // cout<<endl;
    }
    cout<<endl;
    int Sz = sizeof(level)/sizeof(int);
    /*for(int i=0;i<=edges;i++)
    {
        cout<<"Level of "<<i<<"is "<<level[10]<<endl;
    }*/
    return 0;
}


















