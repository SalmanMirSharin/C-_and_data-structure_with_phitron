
//#include<bits/stdc++.h>
//using namespace std;
//
//class Graph{
//    int v;
//    list<int> *adj;
//
//public:
//        Graph(int v){
//        this->v = v;
//        adj = new list<int>[v];
//        }
//    void addEdge(int x, int y){
//            adj[x].push_back(y);
//            adj[y].push_back(x);
//    }
//
//    void printAdjacen(int chk){
//        for(int i=0; i<v; i++){
//            for(int nbr: adj[i]){
//
//                    cout<<nbr<<" ";
//
//            }
//        }
//    }
//
//    void BFS(int source){
//        vector<bool> visited(v,false);
//        queue<int> Q;
//        visited[source] = true;
//        Q.push(source);
//        while(!Q.empty()){
//            int node = Q.front();
//            Q.pop();
//            cout<<node<<" ";
//
////            vector<int> :: iterator it;
////            for(it = adj[node].begin(); it!= adj[node].end(); it++){
////                    if(!visited[*it]){
////                        visited[*it] = true;
////                        Q.push(*it);
////                    }
////            }
//
//
//            for(auto element: adj[node]){
//                int v = element.first;
//                if(visited[v.first]!=true){
//                    visited[v] = true;
//                    Q.push(v);
//                }
//        }
//    }
//    }
//
//};
//
//int main(){
//    int N,E,L;
//
//    cin>>N>>E;
//    Graph g(N);
//    int a,b;
//    for(int i=0; i<E; i++){
//        cin>>a>>b;
//    }
//    cin>>L;
//
//    for(int i=0; i<E; i++){
//        g.addEdge(a,b);
//    }
//
//   g.BFS(0);
//
//
//return 0;
//}


//
//#include<bits/stdc++.h>
//using namespace std;
//
//const int N = 1e5+2;
//    bool vis[N];
//    vector<int> adj[N];


//int main(){
//    for(int i=0; i<N; i++){
//        vis[i] = 0;
//    }
//    int n,m;
//    cin>>n>>m;
//
//    int x,y;
//    for(int i=0; i<m; i++){
//        cin>>x>>y;
//
//
//        adj[x].push_back(y);
//        adj[y].push_back(x);
//
//    }
//    int L;
//    cin>>L;
//    queue<pair<int,int>> q;
//
//    q.push(make_pair(0,0));
//    vis[0] = true;
//    while(!q.empty()){
//       pair<int,int> p = q.front();
//        q.pop();
//
//           if(L==p.second){
//             cout<<p.first<<" ";
//           }
//
//
//        vector<int> :: iterator it;
//
//        for(it = adj[p.first].begin(); it!= adj[p.first].end(); it++){
//
//                if(!vis[*it]){
//                    vis[*it] = true;
//                    q.push(make_pair(*it,p.second+1));
//                }
//
//        }
//    }
//
//return 0;
//}

/*
7 7
1 2
1 3
2 4
2 5
2 6
2 7
7 3

*/

//3 2
//0 1
//0 2



//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//
//    char st;
//    cin>>st;
//    int RB=0,RG=0,BG=0,R=0,B=0,G=0;
//
//    queue<char> q;
//
//
//    q.push(st);
//    char fr = q.front();
//
//    stack<char> s;
//    s.push(st);
//    char to = s.top();
//     cout<<"to: "<<to<<endl;
//   cout<<"fr: "<<fr<<endl;



//    if(fr=='R' && to=='B'){
//        RB++;
//        q.pop();
//        s.pop();
//    }
//     if(fr=='R' && to=='G'){
//        RG++;
//        q.pop();
//        s.pop();
//    }
//    if(fr=='B' && to=='G'){
//        BG++;
//        q.pop();
//        s.pop();
//    }
//    if(fr=='R' && to=='R'){
//        R++;
//        q.pop();
//        s.pop();
//    }
//    if(fr=='B' && to=='B'){
//        B++;
//        q.pop();
//        s.pop();
//    }
//   if(fr=='G' && to=='G'){
//        G++;
//        q.pop();
//        s.pop();
//    }
//
//
//    cout<<"RB"<<RB<<endl;
//    cout<<"RG"<<RG<<endl;
//    cout<<"BG"<<BG<<endl;
//    cout<<"R"<<R<<endl;
//    cout<<"B"<<B<<endl;
//    cout<<"G"<<G<<endl;






//
//
//return 0;
//}
//






//
//#include<bits/stdc++.h>
//using namespace std;
//
//class Node
//{
//public:
//    char value;
//    Node* Next;
//
//    Node(char val)
//    {
//        value = val;
//        Next = NULL;
//    }
//};
//
//
//void insertAtTail(Node* &head, char val)
//{
//    Node* newNode = new Node(val);
//    if(head==NULL)
//    {
//        head = newNode;
//        return;
//    }
//    Node* temp = head;
//    while(temp->Next!=NULL)
//    {
//        temp = temp->Next;
//    }
//    temp->Next = newNode;
//}
//
//void display(Node* n)
//{
//    while(n!=NULL)
//    {
//        cout<<n->value;
//        n = n->Next;
//    }
//    cout<<endl;
//}
//
//
//int main()
//{
//
//    Node* head = NULL;
//
//    int n;
//    cin>>n;
//
//    for(int i=0; i<n; i++){
//        char st;
//        cin>>st;
//        insertAtTail(head,st);
//    }
//
//    display(head);
//
//
//    return 0;
//}




//#include<bits/stdc++.h>
//using namespace std;
//
//void print_val(vector<char> v ){
//        for(int i=0; i<v.size(); i++){
//                cout<<v[i];
//        }
//}
//
//int main(){
//
//    string rb = "RB";
//    string rg = "RG";
//    string bg = "BG";
//
//    vector<char> v;
//    int n;
//    cin>>n;
//    queue<char> q;
//    for(int i=0; i<n; i++){
//        char ch;
//        cin>>ch;
//        v.push_back(ch);
//       char fron = v.front();
//       q.push(fron);
//       char q1fron = q.front();
//       char q2fron = q.front();
//       q.pop();
//       q.pop();
//    }
//
////    if(rb==qfron){
////
////    }
//
//
//
//    print_val(v);
//
//return 0;
//}




#include<bits/stdc++.h>
using namespace std;

class Node
{
public:

    char value;
    Node* Next;

    Node(char val)
    {
        value = val;
        Next = NULL;
    }
};

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
//    else
//    {
//        if(temp==NULL) cout<<"There is no value in the linked list!"<<endl;
//        else deletionAtHead(head);
//
//    }


}


void insertionAtSpecificPosition(Node* &head,int pos,char val)
{
    int i = 0;
    Node* temp = head;

    while(i<pos-2)
    {
        temp = temp->Next;
        i++;
    }

    Node* newNode = new Node(val);
    newNode->Next = temp->Next;
    temp->Next = newNode;
}



void insertAtTail(Node* &head, char val){
    Node* newNode = new Node(val);
    if(head==NULL){
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->Next != NULL){
        temp = temp->Next;
    }
    temp->Next = newNode;
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
}


void display(Node* n)
{
    while(n!=NULL)
    {
        cout<<n->value;

        n = n->Next;
    }
    cout<<endl;
}


void magicColor(Node* &head)
{
    Node* temp1 = head;
    Node* temp2 = head;
    int cou=0;

    while(temp1 != NULL && temp2 != NULL)
    {
        cou++;
        if(temp1==temp2)
        {
            //insertionAtSpecificPosition(head,cou,temp1->value);
            //insertionAtSpecificPosition(head,cou,temp2->value);
            deletionAtSpecificationPosition(head,cou);
            deletionAtSpecificationPosition(head,cou);
        }

        temp1 = temp2;
        temp2 = temp2->Next;
    }
}



int main()
{

    Node* head = NULL;

    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {

        int n;
        cin>>n;
        char str[n];

        for(int i=0; i<n; i++)
        {
            cin>>str[i];
        }

        for(int i=0; i<n; i++)
        {
            if(str[i]=='R' && str[i+1]=='B')
            {
                insertAtTail(head,'P');
                //display(head);
            }
            else if(str[i]=='R' && str[i+1]=='G')
            {
                insertAtTail(head,'Y');
                //display(head);
            }
            else if(str[i]=='B' && str[i+1=='G']){
                insertAtTail(head,'C');
            }
            else
            {
                insertAtTail(head,str[i]);
                insertAtTail(head,str[i+1]);
            }

        }
//                display(head);


       // magicColor(head);

        display(head);

    }


    return 0;
}









#include<bits/stdc++.h>
using namespace std;

void print(vector<char> l){

    for(auto it=l.begin(); it!=l.end(); it++){
        cout<<*it;
    }
    cout<<endl;
}

int main(){

    int t;
    cin>>t;

    for(int i=0; i<t; i++){


    vector<char> l;
    int n;
    cin>>n;
    char s[n];
    //string s;
    //cin>>s;

    for(int i=0; i<n; i++){
        cin>>s[i];
    }

    for(int i=0; i<n; i++){
        if(s[i]=='R' && s[i+1]=='B'){
            l.push_back('P');
            i++;

        }
        else if(s[i]=='R' && s[i+1]=='G'){
            l.push_back('Y');
            i++;
        }
        else if(s[i]=='B' && s[i+1]=='G'){
            l.push_back('C');
            i++;

        }
        else{
            l.push_back(s[i]);
        }
    }


    for(int i=0; i<l.size(); i++){
        if(l[i]==l[i+1]){
            l.erase(l.begin()+i,l.begin()+i+2);
        }
    }
    print(l);

    }

 return 0;
}















