

//Video-1:
//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//
//    char ar[50];
//
//    cin.getline(ar,50);
//
//    cout<<ar;
//
//return 0;
//}


//Video-2:
//#include<bits/stdc++.h>
//using namespace std;
//
//void fun(int *x,int n){
//
//    x[0]=10;
//}
//
//int main(){
//    int a[5]={2,1,3,4,5};
//
//    fun(a,5);
//
//    for(int i=0; i<5; i++){
//        cout<<a[i]<<" ";
//    }
//
//return 0;
//}


//Video-3:
//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main(){
//    //C syntax:
////    int *p =(int*)calloc(10,sizeof(int));
////
////    for(int i=0; i<10; i++){
////
////        cout<<i+1<<" "<<p[i]<<endl;
////    }
////    free(p);
//
//    //C++ syntax:
//
//    int *ptr = new int[10]{0};
//
//    for(int i=0; i<10; i++){
//
//        cout<<ptr[i]<<endl;
//    }
//    delete ptr;
//
//return 0;
//}



//Video-4:
//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//
//    int a[]={2,5,3,4,6},n=5;
//
//    for(int i=0; i<5-1; i++){
//
//        for(int j=i+1; j<5; j++){
//
//            if(a[j]<a[i]){
////                int temp = a[i];
////                a[i] = a[j];
////                a[j] = temp;
//
//                swap(a[j],a[i]);
//            }
//        }
//    }
//
//    for(int i=0; i<5; i++){
//        cout<<a[i]<<" ";
//    }
//return 0;
//}



//Video-5:
//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//   int a[6] = {3,2,1,4,0,5};
//
//   int mn = a[0];
//
//   for(int i=0; i<6; i++){
//
//        if(a[i]<mn){
//            int temp = a[i];
//            a[i] = mn;
//            mn = temp;
//        }
//   }
//
//   cout<<mn;
//
//return 0;
//}


    //Swap function:
//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//
//    int ar[5] = {4,10,3,7,1};
//
//    for(int i=0; i<5-1; i++){
//        for(int j=i+1; j<5; j++){
//                if(ar[j]<ar[i]){
//
//                     swap(ar[i],ar[j]);
//                }
//        }
//    }
//
//    for(int i=0; i<5; i++){
//
//        cout<<ar[i]<<" ";
//    }
//
//return 0;
//}



#include<bits/stdc++.h>
using namespace std;

int main(){

    int a[5] = {5,4,3,2,1};

    sort(a,a+5);

    for(int i=0; i<5; i++){

        cout<<a[i]<<" ";
    }

return 0;
}































