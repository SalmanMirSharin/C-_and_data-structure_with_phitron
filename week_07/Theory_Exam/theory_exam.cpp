
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ar[n];
    int pre[n];


    for(int i=0; i<n; i++){
        cin>>ar[i];
    }

    pre[0] = ar[0];

    for(int i=1; i<n; i++){
        pre[i] = ar[i]+ pre[i-1];
    }

    for(int i=0; i<n; i++){
        cout<<pre[i]<<" ";
    }

return 0;
}
