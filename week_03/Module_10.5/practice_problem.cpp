//
//
//#include<bits/stdc++.h>
//using namespace std;
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
//    int checkValue;
//    cin>>checkValue;
//    int st[n];
//
//    int flag = 0,j=0;
//
//    for(int i=0; i<n; i++){
//        if(ar[i]==checkValue){
//                flag =1;
//                st[j] =i;
//                j++;
//        }
//    }
//
//    if(j>0){
//        cout<<"FOUNd at index position: ";
//    }
//    for(int i=0; i<j; i++){
//
//
//        if(i+1!=j){
//             cout<<st[i]<<", ";
//        }
//        else{
//              cout<<st[i]<<endl;
//        }
//
//    }
//
//    if(flag==0){
//        cout<<"NOT FOUND!";
//    }
//
//
//return 0;
//}


//
//
//#include<bits/stdc++.h>
//using namespace std;
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
//    for(int i=0; i<n; i++){
//            //int flag =0;
//        for(int j=0; j<n-1; j++){
//
//            if(ar[j]>ar[j+1]){
//                int temp = ar[j];
//                ar[j] = ar[j+1];
//                ar[j+1] = temp;
//                //flag = 1;
//                cout<<ar[j]<<" ";
//            }
//
//        }
//        cout<<endl;
//
////        if(flag==0){
////            break;
////        }
//    }
////
////        for(int i=0; i<n; i++){
////            cout<<ar[i]<<" ";
////        }
//
//
//return 0;
//}
//
//




#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

   int sum = ((n*n)+n)/2;
   cout<<sum;

return 0;
}




























