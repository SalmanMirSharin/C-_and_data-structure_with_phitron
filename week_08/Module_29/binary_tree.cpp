
#include<bits/stdc++.h>
using namespace std;

class treeNode{

    public:
    int data;
    treeNode* leftChild;
    treeNode* rightChild;

    treeNode(int value){
            data = value;
            leftChild = NULL;
            rightChild = NULL;
    }

};
void preOrder(treeNode* root,int level);
void spacePrint(int level);


void preOrder(treeNode* root,int level){

        if(root==NULL){
            return;
        }
        if(root->leftChild==NULL && root->rightChild==NULL){
            cout<<root->data<<endl;
            return;
        }
        else{
            cout<<endl;
            spacePrint(level);
            cout<<"Root: "<<root->data<<endl;
        }

    if(root->leftChild!=NULL){
        spacePrint(level);
        cout<<"Left: ";
        preOrder(root->leftChild,level+1);
    }

    if(root->rightChild!=NULL){
        spacePrint(level);
        cout<<"Right: ";
        preOrder(root->rightChild,level+1);
    }

}

void spacePrint(int level){
    for(int i=0; i<level; i++){
        cout<<"   ";
    }
}

int main(){

    int n;
    cin>>n;

    treeNode* allNode[n];

    for(int i=0; i<n; i++){
            allNode[i] = new treeNode(-1);
    }

       for(int i=0; i<n; i++){
            int value, left, right;
            cin>>value >> left >> right;

            allNode[i]->data = value;
            if(left>n-1 || right>n-1){
                cout<<"Invalid Index"<<endl;
                break;
            }
            if(left!=-1){
                allNode[i]->leftChild = allNode[left];
            }

            if(right!=-1){
                allNode[i]->rightChild = allNode[right];
            }
       }

       preOrder(allNode[0],0);


return 0;
}


//9
//0 1 2
//1 3 4
//2 5 6
//3 -1 -1
//4 -1 -1
//5 7 8
//6 -1 -1
//7 -1 -1
//8 -1 -1

