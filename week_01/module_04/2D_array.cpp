//
//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main(){
//
//    int row = 2,col = 3;
//
//    int ar[row][col];
//
//
//    for(int i=0; i<row; i++){
//
//        for(int j=0; j<col; j++){
//
//            cin>>ar[i][j];
//        }
//    }
//
//    cout<<endl;
//
//    for(int i=0; i<row; i++){
//
//        for(int j=0; j<col; j++){
//
//            cout<<ar[i][j]<<" ";
//        }
//        cout<<endl;
//    }
//
//return 0;
//}


//
//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main(){
//
//    int row = 3,col = 3;
//
//    int ar[row][col];
//
//    for(int i=0; i<row; i++){
//        for(int j=0; j<col; j++){
//
//            cin>>ar[i][j];
//        }
//    }
//
//    int sum =0;
//    for(int i=0; i<row; i++){
//
//        for(int j=0; j<col; j++){
//
//            if(ar[i]==ar[j]){
//               sum += ar[i][j];
//            }
//        }
//
//    }
//
//    cout<<sum;
//
//
//return 0;
//}


//
//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main(){
//
//    int row,col;
//
//    cin>>row>>col;
//
//    int ar[row][col];
//
//    for(int i=0; i<row; i++){
//        for(int j=0; j<col; j++){
//
//            cin>>ar[i][j];
//        }
//    }
//
//    if(row!=col){
//        cout<<"No";
//        return 0;
//    }
//
//    for(int i=0; i<row; i++){
//        for(int j=0; j<col; j++){
//
//            if(i==j){
//                continue;
//            }
//            if(ar[i][j]>0){
//                cout<<"NO";
//                return 0;
//            }
//        }
//    }
//    cout<<"Yes";
//
//return 0;
//}





#include<bits/stdc++.h>

using namespace std;

int main(){

    int row,col;

    cin>>row>>col;

    int ar[row][col];

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){

            cin>>ar[i][j];
        }
    }

    if(row!=col){
        cout<<"No";
        return 0;
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){

            if(i==j){
                continue;
            }
            if(ar[i][j]>0){
                cout<<"NO";
                return 0;
            }
        }
    }

        int save;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){

              if(i==j){

                if(i==0 && j==0) save = ar[i][j];

                else{
                    if(save !=ar[i][j]){
                        cout<<"Not scalar"<<endl;
                        return 0;
                    }
                }

              }
        }
    }
   cout<<"Saclar"<<endl;
   cout<<save<<endl;

return 0;
}
































