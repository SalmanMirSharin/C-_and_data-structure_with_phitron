
#include<bits/stdc++.h>
using namespace std;

void PrintArray(int ar[], int n){

       for(int i=0; i<n; i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int n;
    cin>>n;
    int ar[n];

    for(int i=0; i<n; i++){
        cin>>ar[i];
    }

    cout<<"Before Sorting: ";
    PrintArray(ar,n);

    //Insertin sort:

        for(int i=1; i<n; i++){
            int key = ar[i];
            int j=i-1;

            while(ar[j]>key && j>=0){
                ar[j+1] = ar[j];
                j++;
            }
            ar[j+1] = key;
            cout<<"J: "<<j<<" ";
        }


    cout<<"After Sorting: ";
    PrintArray(ar,n);


return 0;
}
