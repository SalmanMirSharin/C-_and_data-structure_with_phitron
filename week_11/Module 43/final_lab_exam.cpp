//
//#include<bits/stdc++.h>
//
//using namespace std;
//
//void test_case(){
//        int n,c;
//        cin>>n>>c;
//        int a[n];
//        for(int i=0; i<n; i++){
//            cin>>a[i];
//        }
//
//        int sum=0;
//        for(int i=0; i<n; i++){
//            sum+= a[i];
//        }
//
//        if(sum*2<=c){
//            cout<<"Yes"<<endl;
//        }
//        else{
//            cout<<"No"<<endl;
//        }
//
//}
//
//int main(){
//    int t;
//    cin>>t;
//
//    for(int i=0; i<t; i++){
//        test_case();
//    }
//return 0;
//}



//Graph:
//
//#include<bits/stdc++.h>
//using namespace std;
//
// typedef pair<int,int> edgeweightpair;
//class Graph{
//    int v;
//    list<edgeweightpair> *adj;
//public:
//    Graph(int v){
//        this->v = v;
//        adj = new list<edgeweightpair> [v];
//    }
//
//void addEdge(int u, int v){
//        adj[u].push_back(make_pair(v,u));
//        adj[v].push_back(make_pair(u,v));
//}
//
//void printNeighbour(int chk){
//    cout<<chk<<":";
//    for(auto i= adj[chk].begin(); i!=adj[chk].end(); i++){
//            cout<<"("<<(*i).first<<","<<(*i).second<<")";
//    }
//    cout<<endl;
//}
//
//
//void BFS(int source){
//    vector<bool> visited(v,false);
//    queue<int> Q;
//    visited[source] = true;
//    Q.push(source);
//    while(!Q.empty()){

//            cout<<u<<endl;
//
//        Q.pop();
//        for(auto element: adj[u]){
//            int v = element.first;
//            if(visited[v]!=true){
//                visited[v] = true;
//                Q.push(v);
//            }
//        }
//    }
//}
//
//};
//int main(){
//    int V,E;
//    cin>>V>>E;
//    Graph g(V);
//    for(int i=0; i<E; i++){
//        int u,v;
//        cin>>u>>v;
//        g.addEdge(u,v);
//    }
//
//    for(int i=0; i<V; i++){
//        if(i==1){
//            g.printNeighbour(i);
//        }
//    }
//    cout<<endl<<endl;
//
//    g.BFS(0,1);
//
//
//return 0;
//}



//3 2
//0 1
//0 2
//1

//7 10
//0 1
//0 2
//0 5
//1 3
//2 3
//3 6
//6 5
//6 4
//5 4
//2 5
//1

//#include<bits/stdc++.h>
//using namespace std;
//
//class Graph{
//    int v;
//    list<int> *l;
//
//public:
//        Graph(int v){
//        this->v = v;
//        l = new list<int> [v];
//        }
//    void addEdge(int x, int y){
//            l[x].push_back(y);
//            l[y].push_back(x);
//    }
//
//    void printAdjacen(int chk){
//        for(int i=0; i<v; i++){
//            for(int nbr:l[i]){
//
//                    cout<<nbr<<" ";
//
//            }
//        }
//    }
//
//  void BFS(int source){
//    vector<bool> visited(v,false);
//    queue<int> Q;
//    visited[source] = true;
//    Q.push(source);
//    while(!Q.empty()){
//        int u = Q.front();
//        cout<<u<<" ";
//        Q.pop();
//        for(auto element: l [u]){
//            int v = element.first;
//            if(visited[v]!=true){
//                visited[v] = true;
//                Q.push(v);
//            }
//        }
//    }
//}
//
//};
//
//int main(){
//    int N,E,L;
//
//    cin>>N>>E;
//    Graph g(N);
//    int a[E],b[E];
//    for(int i=0; i<E; i++){
//        cin>>a[i]>>b[i];
//    }
//    cin>>L;
//
//    for(int i=0; i<E; i++){
//        g.addEdge(a[i],b[i]);
//    }
//
//    g. printAdjacen(L);
//
//
//return 0;
//}


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
//
//}


int main(){

    Node* root = NULL;
    int N,E,L;

    cin>>N>>E;
    int a[E],b[E];
    for(int i=0; i<E; i++){
        cin>>a[i]>>b[i];
    }
    cin>>L;
//

    //InputBinayTree(root);

    level_order(root);

return 0;
}


//3 2
//0 1
//0 2
















