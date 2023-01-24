
#include<bits/stdc++.h>
using namespace std;

void PrintArray(int ar[],int n){

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


    int pos;
    cout<<"position for deletion: ";
    cin>>pos;

    if(pos<0 || pos>n-1){
        cout<<"Invalid Index!";
    }
   else{

     if(pos == n-1) n--;
    else{
        for(int i=pos+1; i<n; i++){

        ar[i-1] = ar[i];

    }
     n--;

    }
    cout<<"Got value: ";
    PrintArray(ar,n);

   }


return 0;
}
