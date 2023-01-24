
#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int ar[], int x, int lb, int ub){

        if(lb<=ub){

                int mid = (lb+ub)/2;
                //mid
                if(x==ar[mid]) return mid;

                //x>arr[mid]
                else if(x>ar[mid]) BinarySearch(ar,x,mid+1,ub);

                //x<arr[mid]
                else if(x<ar[mid]) BinarySearch(ar,x,lb,mid-1);

        }
        else{
           return -1;
        }

}

int main(){

    int n;
    cin>>n;
    int ar[n];

    for(int i=0; i<n; i++){

        cin>>ar[i];
    }

    int checkValue;
    cout<<"Enter the value you want to search: ";
    cin>>checkValue;

    int indexNumber = BinarySearch(ar,checkValue,0,n-1);

    if(indexNumber!=-1)
    {
        cout<<"Index No: "<<indexNumber;
    }
    else{
        cout<<"Not Found!";
    }

return 0;
}
