
#include<bits/stdc++.h>
using namespace std;

int main(){

//    int n;
//    cin>>n;
//
//    if(n>5){
//        cout<<"it's greter than 5";
//    }
//    else{
//        cout<<"not greter than";
//    }
//
//    pos>size;
//
//    0 1 2 3 4 5
//    size-1; 0 1 2 3 4
//    pos>size-1;

//    int base = 256;
//    int sum = base+(2*4);
//    cout<<sum;



//int a[3];
//for(int i=0;i<4;i++)
//{
//    a[i]=i;
//}
//for(int i=0;i<4;i++)
//{
//    cout<<a[i]<<" ";
//}

//
//int ar[6]={10,20,30,40,50};
//
//    int pos,val;
//    cin>>pos>>val;
//
//    for(int i=6-1; i>=pos; i--){
//
//        ar[i+1] = ar[i];
//    }
//
//    ar[pos] = val;
//
//for(int i=0; i<6; i++){
//    cout<<ar[i]<<" ";
//}


// int ar[5]={1,2,3};
//
// for(int i=0; i<5; i++){
//    cout<<ar[i];
// }


//int a[10]={-1};
//
////for(int i=0; i<10; i++){
////    cout<<a[i]<<" ";
////}
//
//cout<<memset(a,-1,sizeof(a));

//    int str[10] = {-1};
//    memset(str, -1, sizeof(str));
//
//   for(int i=0; i<10; i++){
//        cout<<str[i]<<" ";
//   }

    int ar[5] ={1,3,5,2,6};

    sort(ar,ar+5);

    for(int i=0; i<5; i++){
        cout<<ar[i];
    }


return 0;
}
