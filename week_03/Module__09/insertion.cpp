
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


    int pos, value;
    cout<<"Position: ";

    cin>>pos;


    if(pos<0 || pos>n){
            cout<<endl;
        cout<<"Invalid Index!"<<endl;
        return 0;
    }
    else{
         cout<<"Given of insertion: ";
        cin>>value;
//        for(int i=n-1; i>=pos; i--){
//
//        ar[i+1] = ar[i];
//
//        }

        ar[n] = ar[pos];
        ar[pos] = value;
    }

    cout<<"Insertion Value: ";
    PringArray(ar,n+1);

    cout<<endl;
return 0;
}
