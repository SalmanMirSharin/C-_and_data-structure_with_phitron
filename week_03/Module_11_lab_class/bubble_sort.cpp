
#include<bits/stdc++.h>
using namespace std;

void PrintArray(int ar[], int n){

    for(int i=0; i<n; i++){
        cout<<ar[i]<<" ";
    }
}

int main(){

    int n;
    cin>>n;
    int ar[n];

    for(int i=0; i<n; i++){
        cin>>ar[i];
    }
    cout<<"Before Sort: ";
    PrintArray(ar,n);
    cout<<endl<<endl;

    for(int i=0; i<n; i++){
              int flag =0;
        cout<<"Iteration No: "<<i<<endl;
        for(int j=0; j<n-i; j++){
            if(ar[j]>ar[j+1]){
                flag =1;
                int temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;

             }
             PrintArray(ar,n);
               cout<<endl;

        }
                   if(flag!=1){
                break;
            }


    }

     cout<<endl<<endl;

    cout<<"After Sort: ";
    PrintArray(ar,n);

return 0;
}
