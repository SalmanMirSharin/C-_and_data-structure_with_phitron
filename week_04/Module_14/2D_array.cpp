//
//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//
//    int n,m;
//
//    cin>>n>>m;
//    int ar[n][m];
//
//    for(int i=0; i<n; i++){
//        for(int j=0; j<m; j++){
//
//            cin>>ar[i][j];
//        }
//    }
//        cout<<"2D Array output"<<endl;
////    for(int i=0; i<n; i++){
////        for(int j=0; j<m; j++){
////            cout<<ar[i][j]<<" ";
////        }
////        cout<<endl;
////    }
//
//    //cout<<ar[2][1];
//
//    int x;
//    cin>>x;
//
//    int flag = false;
//
//    for(int i=0; i<n; i++){
//        for(int j=0; j<m; j++){
//            if(ar[i][j]==x){
//                cout<<i<<" "<<j<<endl;
//                flag = true;
//            }
//        }
//    }
//
//    if(flag){
//        cout<<"Element is found";
//    }
//    else{
//        cout<<"Element is not found";
//    }
//
//
//return 0;
//}



#include<bits/stdc++.h>
using namespace std;

int main(){

    int ar[5]={10,2,3,4,5};
    int pre[5];
    pre[0] = ar[0];

    for(int i=1; i<5; i++){
        pre[i] = ar[i] + pre[i-1];
    }

    for(int i=0; i<5; i++){
        cout<<pre[i]<<" ";
    }

return 0;
}
















