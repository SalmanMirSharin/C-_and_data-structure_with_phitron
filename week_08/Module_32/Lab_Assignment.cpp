
#include<bits/stdc++.h>
using namespace std;

class Node{

public:

    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void level_order(Node* root){
        if(root==NULL){
            return;
        }
        queue<Node*>q;
        q.push(root);
        q.push(NULL);

        while(!q.empty()){
            Node* Node = q.front();
            q.pop();
            if(Node!=NULL){
                cout<<Node->data<<" ";
                if(Node->left!=NULL){
                    q.push(Node->left);
                }
                if(Node->right!=NULL){
                    q.push(Node->right);
                }
            }
            else if(!q.empty()){
                q.push(NULL);
            }
        }
        cout<<endl;
}

void average_level(Node* root){
        queue<Node*>q;
        vector<double>ans;
        q.push(root);

        while(!q.empty()){
            int n = q.size();
            double sum = 0;
            for(int i=0; i<n; i++){
                Node* treeNode = q.front();
                if(treeNode->left)q.push(treeNode->left);
                if(treeNode->right)q.push(treeNode->right);
                sum+=treeNode->data;
                q.pop();
            }
           ans.push_back(sum/n);
    }
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
}

void zigzag_order(Node* root){
        if(root==NULL){
            return;
        }
        stack<Node*>currLevel;
        stack<Node*>nextLevel;

        bool leftToRight = true;
        currLevel.push(root);

        while(!currLevel.empty()){
            Node* temp = currLevel.top();
            currLevel.pop();

            if(temp){
                cout<<temp->data<<" ";


            if(leftToRight){
                if(temp->left){
                    nextLevel.push(temp->left);
                }
                if(temp->right){
                    nextLevel.push(temp->right);
                }
            }
            //Right to left:
            else{
                if(temp->right){
                    nextLevel.push(temp->right);
                }
                if(temp->left){
                    nextLevel.push(temp->left);
                }
            }
        }
        if(currLevel.empty()){
            leftToRight = !leftToRight;
            swap(currLevel,nextLevel);
        }
    }

}


void level_order_reverse(Node* root){
        if(root==NULL){
            return;
        }

        stack<Node*>s;
        queue<Node*>q;

        q.push(root);
        //q.push(NULL);

        while(!q.empty()){
            root = q.front();
            q.pop();
            s.push(root);

                if(root->right!=NULL){
                    q.push(root->right);
                }
                  if(root->left!=NULL){
                    q.push(root->left);
                }

        }

        while(!s.empty()){
           root = s.top();
            cout<<root->data<<" ";
            s.pop();
        }
        cout<<endl;
}

bool isMirror(Node* p, Node* q){

        if(p==NULL && q==NULL) return true;
        if(p==NULL || q==NULL) return false;

       if(p!=NULL && q!=NULL){
            if(p->data==q->data && isMirror(p->left,q->right)&& isMirror(p->right,q->left)){
                return true;
            }
            else{
                return false;
            }
       }
    }

bool isSymmetric(Node* root){
    return isMirror(root,root);
}


void InputBinayTree(Node* &root){
    int a;
    cin>>a;

    root = new Node(a);

        queue<Node*>q;
        q.push(root);

        while(!q.empty()){
            Node* presentNode = q.front();
            q.pop();
            int x,y;
            cin>>x>>y;
            Node* n1 = NULL;
            Node* n2 = NULL;
            if(x!=-1) n1 = new Node(x);
            if(y!=-1) n2 = new Node(y);

            presentNode->left = n1;
            presentNode->right = n2;

            if(n1!=NULL) q.push(n1);
            if(n2!=NULL) q.push(n2);
        }

}

bool isSameStructure(Node* root1, Node* root2)
{
    if (root1==NULL && root2==NULL)
        return true;

    if (root1!=NULL && root2!=NULL)
    {
       if(root1->data == root2->data && isSameStructure(root1->left, root2->left) && isSameStructure(root1->right, root2->right))
            {
                return true;
            }
            else{
                return false;
            }
    }

}

Node* invert_tree(Node* &root){
        if(root==NULL){
            return NULL;
        }

        Node* invertRight = invert_tree(root->right);
        Node* invertLeft  = invert_tree(root->left);

        root->right = invertLeft;
        root->left = invertRight;

        return root;

}


bool is_unival(Node* root){
    bool leftSideValued = (root->left==NULL) || (root->data==root->left->data && is_unival(root->left));
    bool rightSideValued = (root->right==NULL) || (root->data==root->right->data && is_unival(root->right));

        return leftSideValued && rightSideValued;

}

 int second_minimum(Node* root){
        if(root==NULL) return -1;
        if(root->left==NULL && root->right==NULL) return -1;

        int leftVal = root->left->data;
        int rightVal = root->right->data;

        if(root->left->data==root->data){
            leftVal = second_minimum(root->left);
        }
        if(root->right->data==root->data){
            rightVal = second_minimum(root->right);
        }

        if(leftVal != -1 && rightVal != -1){
            return min(leftVal,rightVal);
        }
        if(leftVal!=-1) return leftVal;
        else return rightVal;
 }


int main(){

    Node* root = NULL;

//
//    cout<<"Value: "<<endl;
//    InputBinayTree(root);
//
//        int s_min = second_minimum(root);
//
//        cout<<s_min;


    InputBinayTree(root);
    level_order(root);




    return 0;
}


//1
//1 2
//-1 -1 -1 -1
//1
//1 2
//-1 -1 -1 -1


//3
//9 20
//-1 -1 15 7
//-1 -1 -1 -1


//1
//2 2
//3 4 3 4
//-1 -1 -1 -1 -1 -1 -1 -1


//3
//9 20
//-1 -1 15 7
//-1 -1 -1 -1

//
//4
//2 7
//1 3 6 9
//-1 -1 -1 -1 -1 -1 -1 -1

//
//1
//1 1
//1 1 -1 5
//-1 -1 -1 -1 -1 -1

//2
//2 5
//-1 -1 5 7
//-1 -1 -1 -1




