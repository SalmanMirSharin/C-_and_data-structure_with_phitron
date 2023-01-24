
//Bubble sort:
//#include<bits/stdc++.h>
//using namespace std;
//
//void print(int ar[],int n){
//
//    for(int i=0; i<=n; i++){
//        cout<<ar[i]<<" ";
//    }
//
//}
//
//int main(){
//
//    int n;
//    cin>>n;
//
//    int ar[n];
//
//    for(int i=0; i<=n; i++){
//        cin>>ar[i];
//    }
//
//    for(int i=0; i<n; i++){
//            cout<<"Index: "<<i<<endl;
//            int flag =0;
//        for(int j=0; j<n-i; j++){
//
//            if(ar[j]>ar[j+1]){
//                int temp = ar[j];
//                ar[j] = ar[j+1];
//                ar[j+1] = temp;
//                flag =1;
//            }
//            print(ar,n);
//            cout<<endl;
//        }
//         if(flag ==0){
//        break;
//    }
//
//    }
//
//return 0;
//}



//
//#include<bits/stdc++.h>
//using namespace std;
//
//void printArray(int ar[], int n){
//
//        for(int i=0; i<=n; i++){
//            cout<<i<<" "<<"Index Value: "<<" "<<ar[i]<<endl;
//        }
//    cout<<endl;
//}
//
//int main(){
//
//    int size;
//    cin>>size;
//    int ar[size];
//
//    for(int i=0; i<=size; i++){
//        cin>>ar[i];
//    }
//
//    cout<<"Before Sort: "<<endl;
//    printArray(ar,size);
//
//    //step-1 Finding Max:
//
//    int max = INT_MIN;
//
//    for(int i=0; i<=size; i++){
//
//        if(ar[i]>max){
//            max = ar[i];
//        }
//
//    }
//
//    cout<<"Max Value: "<<max<<endl<<endl;
//
//    //Step 2 Initialization of counting array:
//
//    int cut[max+1]={0};
//
//
//    //Step 3 Frequency array:
//
//    for(int i=0; i<=size; i++){
//
//        cut[ar[i]]++;
//    }
//
//     cout<<"Frequency Sort: "<<endl;
//    printArray(cut,max);
//
//    //Step 4 Cumulative Sum:
//
//    for(int i=1; i<=max; i++){
//
//        cut[i]+=cut[i-1];
//
//    }
//      cout<<"Cumulative sum: "<<endl;
//        printArray(cut,max);
//
//
//
//    //Step 5 Final Array:
//        int fina[size];
//    for(int i=size; i>=0; i--){
//
//            cut[ar[i]]--;
//           int k = cut[ar[i]];
//           fina[k] = ar[i];
//    }
//    cout<<"After Sort: "<<endl;
//    printArray(fina,size);
//
//
//return 0;
//}


//
//#include<bits/stdc++.h>
//using namespace std;
//
//void printArray(int ar[],int n){
//
//    for(int i=0; i<n; i++){
//        cout<<ar[i]<<" ";
//    }
//    cout<<endl;
//
//}
//
//int main(){
//
//    int n;
//    cin>>n;
//    int ar[n];
//
//    for(int i=0; i<n; i++){
//        cin>>ar[i];
//    }
//
////    printArray(ar,n);
//
//    for(int i=1; i<n; i++){
//        int key = ar[i];
//             cout<<endl;
//        cout<<"i: "<<i<<" "<<"k: "<<key<<endl;
//
//            int j=i-1;
//            while(ar[j]>key && j>=0){
//                ar[j+1] = ar[j];
//                //cout<<"Inside J"<<endl;
//                 printArray(ar,n);
//                 //cout<<endl;
//                j--;
//
//            }
//             ar[j+1] = key;
//             //cout<<"Inside for i"<<endl;
//
//            printArray(ar,n);
//             cout<<endl;
//    }
//
//    cout<<"After sorting"<<endl;
//    printArray(ar,n);
//
//    cout<<endl;
//return 0;
//}


//
//
//#include<bits/stdc++.h>
//using namespace std;
//
//int binarySearch(int ar[],int x,int lb,int ub){
//
//            if(lb<=ub){
//            //mid
//            int mid = (lb+ub)/2;
//            //x==ar[mid]
//            if(x==ar[mid]) return mid;
//
//             //x>ar[mid]
//
//            else if(x>ar[mid])binarySearch(ar,x,mid+1,ub);
//
//                    //x>ar[mid]
//           else if(x<ar[mid])binarySearch(ar,x,lb,mid-1);
//
//            }
//            else{
//               return -1;
//            }
//}
//
//
//int main(){
//
//    int n;
//    cin>>n;
//    int ar[n];
//
//    for(int i=0; i<n; i++){
//
//        cin>>ar[i];
//    }
//
//    int checkvalue;
//    cout<<"Enter the check Value: ";
//     cin>>checkvalue;
//
//    int indexValue;
//    indexValue = binarySearch(ar,checkvalue,0,n-1);
//
//    if(indexValue!=-1){
//        cout<<"Index Number: "<<indexValue<<" "<<"Position: "<<indexValue+1;
//    }
//    else{
//        cout<<"Not Found";
//    }
//
//
//
//return 0;
//}





#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin>>n;
    int ar[n];

    for(int i=0; i<n; i++){
        cin>>ar[i];
    }

    int checkvalue;
    cin>>checkvalue;
    bool fount = false;
    int left=0,right=n-1;

    while(left<=right){

        int mid = (left+right)/2;
        if(checkvalue==ar[mid]){
            cout<<"Found at index: "<<mid;
            fount= true;
            break;
        }

        if(checkvalue<ar[mid]){
                right= mid-1;
        }

        else{
            left= mid+1;
        }
    }
    if(fount==false){
        cout<<"Not Found";
    }



return 0;
}






























