
#include<bits/stdc++.h>
using namespace std;

void Swap(int *a,int *b){
    int temp;
    temp =*a;
    *a = *b;
    *b = temp;
}

void heapify(int arr[],int n, int current){
    int largest = current;
    int left = 2*current+1;
    int right = 2*current+2;

    if(left<n && arr[left]>arr[largest]){
        largest = left;
    }

    if(right<n && arr[right]>arr[largest]){
        largest = right;
    }

    if(largest!=current){
        Swap(arr[current],arr[largest]);
        heapify(arr,n,largest);
    }
}

void printArray(int arr[],int n){
    cout<<endl;
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
    cout<<endl;
}

int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Before Heapify";
    printArray(arr,n);

    int nonLeafStart = (n/2)-1;

    for(int i=nonLeafStart; i>=0; i--){
        heapify(arr,n,i);
    }
    cout<<"After Heapify";
    printArray(arr,n);


return 0;
}

/*

9
2 10 1 5 4 8 3 8 7

*/
