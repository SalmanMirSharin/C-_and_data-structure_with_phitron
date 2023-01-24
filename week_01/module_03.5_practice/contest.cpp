
//Solve-A:
//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//
//    int x,t;
//    cin>>x>>t;
//
//    if(x>=t){
//        cout<<x-t<<endl;
//    }
//    else{
//        cout<<"0"<<endl;
//    }
//
//return 0;
//}



//Solve-B:
//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main(){
//
//    char s[100000];
//
//    cin>>s;
//
//    for(int i=1; i<=strlen(s); i++){
//       if(i%2!=0){
//         cout<<s[i-1];
//       }
//    }
//return 0;
//}


//Not Solve--C:
//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//
//    char str[100000];
//    //char alfabet[26];
//    int counts[26]={0};
////    for(char i='a'; i<='z'; i++){
////
////        alfabet[i] = i;
////    }
//
//    cin>>str;
//
//    for(int i=0; i<strlen(str); i++){
//
//                char ans = str[i];
//            counts[ans-'a']++;
//    }
//
//    for(int i=0; i<26; i++){
//
//          printf("%c",counts[i]);
//    }
//
////
////    for(char i='a'; i<'z'; i++){
////
////        cout<<alfabet[i];
////    }
//
//return 0;
//}



//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//
//    char st[100];
//    int counts = 0;
//
//    cin>>st;
//
//    int len = strlen(st)-1;
//
//        for(int i=1; i<len; i++){
//
//                counts++;
//        }
//
//    cout<<st[0]<<counts<<st[len];
//
//return 0;
//}




//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//
//    int n;
//    cin>>n;
//
//    int counts = 0;
//    for(int i=0; i<=n; i++){
//
//        if(i%2==0){
//            counts++;
//        }
//    }
//
//    cout<<counts;
//
//return 0;
//}



//Solve-F:
//#include<bits/stdc++.h>
//using namespace std;
//
//main(){
//
//    int n,k,sum = 0;;
//
//    cin>>n>>k;
//
//     int ar[n];
//
//    for(int i=0; i<n; i++){
//
//        cin>>ar[i];
//
//    }
//
//    sort(ar,ar+n);
//
//    int sub = n-k;
//    for(int i=sub; i<n; i++){
//
//        sum+=ar[i];
//
//    }
//
//    cout<<sum;
//
//
//return 0;
//}


//Solve-H:
//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//
//    char s[100];
//
//    cin>>s;
//
//    int counts[26]={0};
//
//    for(int i=0; i<strlen(s); i++){
//
//            char ans = s[i];
//
//            counts[ans-'a']++;
//    }
//
//    for(int i=0; i<26; i++){
//
//               if(counts[i]!=0){
//                    if(counts[i]!=1){
//                        cout<<"no";
//                        return 0;
//                    }
//               }
//            }
//
//    cout<<"yes";
//
//
//return 0;
//}



//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//
//    char A[11],B[11],C[11];
//
//    cin>>A>>B>>C;
//
//    int a_len = strlen(A)-1;
//    int b_len = strlen(B)-1;
//
//    if(A[a_len]==B[0] && B[b_len]==C[0]){
//
//            cout<<"YES";
//    }
//    else{
//        cout<<"NO";
//    }
////
//return 0;
//}





  #include<bits/stdc++.h>
  using namespace std;

  void newWord(char *s){

        for(int i=2; i<strlen(s); i++){

            cout<<s[i];
        }
  }

  int main(){

     char st[100];

     cin>>st;

     newWord(st);

  return 0;
  }




















