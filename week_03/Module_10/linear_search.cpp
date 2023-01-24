//
//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//
//    int ar[6]={1,3,5,7,2,3};
//    int x,flag=0;
//    cin>>x;
//
//    for(int i=0; i<6; i++){
//
//        if(ar[i]==x){
//            cout<<"Index: "<<i<<" "<<"value: "<<ar[i]<<endl;
//            flag=1;
//        }
//    }
//
//    if(flag==0){
//        cout<<"Value not found";
//        cout<<endl;
//    }
//
//
//return 0;
//}




//Liner_Search rewrite Code:

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    int ar[n];

    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }

    char ch;
    cout<<"Do you want to search: (Y/N) ";
    cin>>ch;


    while(toupper(ch)=='Y')
    {


        int checkValu;
        cout<<"Give searching value: ";
        cin>>checkValu;
        int flag = 0;
        for(int i=0; i<n; i++)
        {

            if(ar[i]==checkValu)
            {
                flag =1;
                cout<<"Index NO: "<<i<<" Value is: "<<ar[i]<<endl;
            }
        }

        if(flag ==0)
        {
            cout<<"Not Found!"<<endl;
        }

        cout<<"Do you want to continue search: (Y/N) ";
        cin>>ch;

    }


    return 0;
}



















