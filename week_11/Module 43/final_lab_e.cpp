//
//#include<bits/stdc++.h>
//using namespace std;
//
//void print(vector<char> l)
//{
//
//    for(auto it=l.begin(); it!=l.end(); it++)
//    {
//        cout<<*it;
//    }
//    cout<<endl;
//
//}
//
//
//void magic_color(vector<char>l,char s[], int n)
//{
//
//    for(int i=0; i<n; i++)
//    {
//        cin>>s[i];
//    }
//
//    for(int i=0; i<n; i++)
//    {
//
//        if(s[i]=='R' && s[i+1]=='B' || s[i]=='B' && s[i+1]=='R' )
//        {
//            l.push_back('P');
//            i++;
//
//        }
//        else if(s[i]=='R' && s[i+1]=='G' || s[i]=='G' && s[i+1]=='R')
//        {
//            l.push_back('Y');
//            i++;
//        }
//        else if(s[i]=='B' && s[i+1]=='G' || s[i]=='G' && s[i+1]=='B')
//        {
//            l.push_back('C');
//            i++;
//
//        }
//        else if( (s[i]!='R' && s[i+1]!='B') || (s[i]!='R' && s[i+1]!='G') || (s[i]!='B') && (s[i+1]!='G'))
//        {
//            l.push_back(s[i]);
//            if(i<n-1)
//            {
//                l.push_back(s[i+1]);
//            }
//
//            i++;
//        }
//
//        else if(s[i]=='B' && s[i+1]=='R' )
//        {
//            l.push_back('P');
//            i++;
//
//        }
//        else if(s[i]=='G' && s[i+1]=='R')
//        {
//            l.push_back('Y');
//            i++;
//        }
//
//        else if(s[i]=='G' && s[i+1]=='B')
//        {
//            l.push_back('C');
//            i++;
//        }
//        else
//        {
//            l.push_back(s[i]);
//            i++;
//        }
//
//    }
//
//
//
//    bool flag = true;
//
//    while(flag==true)
//    {
//        int sz = l.size();
//        int cnt=1;
//
//
//        for(int i=0; i<l.size() && i+1<l.size(); i++)
//        {
//            if(l[i]==l[i+1])
//            {
//                l.erase(l.begin()+i,l.begin()+(i+2));
//            }
//            cnt++;
//        }
//
//        if(sz==cnt)
//        {
//            flag=false;
//        }
//    }
//
//    print(l);
//
//}
//
//int main()
//{
//
//    int t;
//    cin>>t;
//
//    for(int i=0; i<t; i++)
//    {
//        vector<char> l;
//        int n;
//        cin>>n;
//
//        char s[n];
//
//        magic_color(l,s,n);
//
//    }
//
//    return 0;
//}
//
//
//



//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//
//   long long int y;
//    cin>>y;
//
//    if(0<y && y<=20){
//
//
//    long long int nodeVal = 1;
//
//    if(y==1 || y==2)
//    {
//        nodeVal =1;
//    }
//    else
//    {
//        for(int i=3; i<=y; i++)
//        {
//            nodeVal*=2;
//        }
//    }
//
//    long long int numOfNode =1;
//
//    for(int i=2; i<=y; i++)
//    {
//        numOfNode*=2;
//
//    }
//
//    if(y==1 || y==2)
//    {
//        cout<<numOfNode;
//    }
//    else
//    {
//        cout<<numOfNode*nodeVal;
//    }
//}
//
//    return 0;
//}





//
//#include<bits/stdc++.h>
//using namespace std;
//
//class Node{
//
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
//
//
//void levelOrdInput(Node* &root){
//    int a;
//    cin>>a;
//    root = new Node(a);
//    queue<Node*> q;
//    q.push(root);
//    while(!q.empty()){
//        Node* presentRoot = q.front();
//        q.pop();
//        int x,y;
//        cin>>x>>y;
//        Node* n1 = NULL;
//        Node* n2 = NULL;
//        if(x!=-1) n1 = new Node(x);
//        if(y!=-1) n2 = new Node(y);
//        presentRoot->left = n1;
//        presentRoot->right = n2;
//
//        if(n1!=NULL) q.push(n1);
//        if(n2!=NULL) q.push(n2);
//
//
//    }
//
//
//}
//
//
//void level_order_print(Node* root){
//
//    vector<int>v;
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
//
//                //cout<<Node->data<<" ";
//                v.push_back(Node->data);
//
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
////        cout<<endl;
//
//    int Q;
//    cin>>Q;
//
//    for(int i=0; i<Q; i++){
//        int a;
//        cin>>a;
//
//        if(a==1){
//            int inpu;
//            cin>>inpu;
//            v.push_back(inpu);
//
//        }
//
//        if(a==2){
//             sort(v.begin(),v.end(),greater<int>());
//            cout<<v[0]<<endl;
//            v.erase(v.begin(),v.begin()+1);
//        }
//    }
//
//}
//
//
//int main(){
//   Node* root = NULL;
//
//
//    levelOrdInput(root);
//
//
//    level_order_print(root);
//
//
//}



/*
0
20 15
-1 -1 2 4
-1 -1 -1 -1
4
2
1 10
1 5
2
*/



//
//#include<bits/stdc++.h>
//using namespace std;
//vector<int> v[21];
//
//int main(){
//    int n,e;
//    cin>>n>>e;
//    for(int i=0; i<e; i++){
//        int a,b;
//        cin>>a>>b;
//
//        v[a].push_back(b);
//        v[b]
//
//
//    }
//
//
//return 0;
//}




//
//
//#include<bits/stdc++.h>
//using namespace std;
//
//class Node{
//public:
//    int data;
//    Node* left;
//    Node* right;
//
//    Node(int val){
//        this->data = val;
//        this->left = NULL;
//        this->right = NULL;
//    }
//};
//
//
//void printArray(int ar[], int index){
//        vector<int>v;
//    for(int i=0; i<index; i++){
//        //cout<<ar[i];
//        v.push_back(ar[i]);
//    }
//
//    for(int i=0; i<v.size(); i++){
//        cout<<v[i];
//    }
//
//    cout<<endl;
//}
//
//
//void printPathRecur(Node* root,int path[], int pathlen){
//        if(root==NULL) return;
//
//    path[pathlen] = root->data;
//    pathlen++;
//
//    if(root->left==NULL && root->right==NULL){
//        printArray(path,pathlen);
//    }
//    else{
//        printPathRecur(root->left,path,pathlen);
//        printPathRecur(root->right,path,pathlen);
//    }
//}
//
//void printPath(Node* root){
//    int path[1000];
//    printPathRecur(root,path,0);
//}
//
//void levelOrdInput(Node* &root){
//
//    int a;
//    cin>>a;
//    root = new Node(a);
//    queue<Node*> q;
//    q.push(root);
//    while(!q.empty()){
//        Node* presentRoot = q.front();
//        q.pop();
//        int x,y;
//        cin>>x>>y;
//        Node* n1 = NULL;
//        Node* n2 = NULL;
//        if(x!=-1) n1 = new Node(x);
//        if(y!=-1) n2 = new Node(y);
//        presentRoot->left = n1;
//        presentRoot->right = n2;
//
//        if(n1!=NULL) q.push(n1);
//        if(n2!=NULL) q.push(n2);
//
//    }
//
//}
//
//
//int main(){
//
//    Node* root = NULL;
//
//    string s;
//    cin>>s;
//
//    levelOrdInput(root);
//
////    for(int i=0; i<s.length(); i++){
////        cout<<i<<s[i]<<endl;
////    }
//
//
//    printPath(root);
//return 0;
//}




//
//#include <bits/stdc++.h>
//using namespace std;
//
//void graph_value_push(int n,int e){
//    vector<vector<int>>
//    l(n, vector<int>());
//        for (int i = 0; i < e; i++)
//     {
//          int a, b;
//          cin >> a >> b;
//          l[a].push_back(b);
//          l[b].push_back(b);
//     }
//
//     int k;
//     cin >> k;
//     int direcly_conect = l[k].size();
//     cout<<direcly_conect<<endl;
//}
//
//int main()
//{
//     int n, e;
//     cin >>n>>e;
//
//    graph_value_push(n,e);
//
//
//     return 0;
//}



//#include <bits/stdc++.h>
//using namespace std;
//
//
//typedef pair<int,int> edgeWeightPair;
//
//class Graph
//{
//    int V;
//    list<edgeWeightPair> *l;
//public:
//    Graph(int V){
//        this->V = V;
//        l = new list<edgeWeightPair>[V];
//    }
//
//void addEdges(int a, int b){
//        l[a].push_back(make_pair(a, b));
//
//}
//
//    void reachPath(int k, int n){
//
//        vector<bool> visited(V,false);
//
//        queue<int> q;
//
//        visited[k] = true;
//
//        q.push(k);
//
//        int cnt = 0;
//
//        while (!q.empty()){
//
//            int u = q.front();
//
//            q.pop();
//
//            for (auto nbr : l[u])
//
//            {
//                 int v = nbr.second;
//
//
//                if (visited[v] != true)
//
//                {
//                    visited[v] = true;
//
//                    q.push(v);
//
//                    cnt++;
//
//                }
//
//            }
//
//        }
//
//        cout<<cnt<<endl;
//
//    }
//
//};
//
//
//int main(){
//
//    int n,e;
//
//    cin>>n>>e;
//
//    Graph g(n);
//
//    for (int i = 0; i <e; i++){
//
//        int a, b;
//
//        cin >>a>>b;
//
//        g.addEdges(a,b);
//
//    }
//
//    int k;
//    cin >> k;
//    g.reachPath(k,n);
//return 0;
//}




#include<bits/stdc++.h>
using namespace std;


class Node
{
public:
    char value;
    Node *left, *right;
    Node (char val)
    {
        value = val;
        left = NULL;
        right = NULL;

    }
};


//void searchPath(Node*root, string &output, int &total)
void searchPath(Node* root)
{
        string output ="";
    if(root == NULL) return;
        output+= root->value;
    // cout<<root->value;
    searchPath(root->left, output, total);
    searchPath(root->right, output, total);

        int palindrom;
    if(root->left == NULL && root->right == NULL) {
        string str = output;
        reverse(str.begin(), str.end());
        if(str == output) {

            palindrom++;
        }

        // cout<<str << "|"<<output<< endl;

    }
    output.pop_back();

    cout<<total<<endl;
}

//void searchAllPath(Node*root) {
//
//
//}


int main ()
{

    string strNode;
    cin >> strNode;

    int r;
    cin >> r;
    Node *rootNode = NULL;
    rootNode = new Node (strNode[r]);
    queue < Node * >q;
    q.push (rootNode);


    while (!q.empty ())
    {
        Node *currentNode = q.front();
        q.pop ();
        int l, r;
        cin >> l >> r;
        Node*n1 = NULL, *n2 = NULL;
        if (l != -1) {
            n1 = new Node(strNode[l]);
        }

        if(r != -1) {
            n2 = new Node(strNode[r]);
        }

        currentNode->left = n1;
        currentNode->right= n2;

        if(n1 != NULL) {
            q.push(n1);
        }
        if(n2 != NULL) {
            q.push(n2);
        }

    }
//    string output = "";
//    int total = 0;
    searchPath(rootNode);



    return 0;
}









