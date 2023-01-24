

#include<bits/stdc++.h>
using namespace std;

void PringArray(int ar[],int n){

    for(int i=0; i<n; i++){

        cout<<ar[i]<<" ";
    }

}


int main(){

    int n;
    cin>>n;
    int ar[50];

    for(int i=0; i<n; i++){

        cin>>ar[i];
    }

    cout<<"Given Array: ";
    PringArray(ar,n);

return 0;
}
