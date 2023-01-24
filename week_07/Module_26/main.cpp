
#include<bits/stdc++.h>
#include"MYQUEUE.h"
using namespace std;

int main(){
    Queue<int> q;

    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int chk;
        cin>>chk;
        q.Push(chk);
    }

    while(!q.Empty()){
        cout<<q.Pop()<<" ";
    }
//
//    if(!q.Empty()){
//        cout<<q.Fornt()<<endl;
//    }
//
//    if(!q.Empty()){
//        cout<<q.Back()<<endl;
//    }

return 0;
}
