
//Solve-A:
//#include<bits/stdc++.h>
//
//using namespace std;
//
//
//int main(){
//
//    int a,b,h;
//
//    cin>>a>>b>>h;
//
//    int area = (a+b)*h/2;
//
//    cout<<area<<endl;
//
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
//    char ch;
//
//    cin>>ch;
//
//    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
//
//        cout<<"vowel"<<endl;
//    }
//    else{
//        cout<<"consonant"<<endl;
//    }
//
//
//return 0;
//}



//Solve-C:
//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main(){
//
//    int a,b;
//
//    char op;
//
//    cin>>a>>op>>b;
//
//    if(op=='+'){
//        cout<<a+b<<endl;
//    }
//    else if(op=='-'){
//        cout<<a-b<<endl;
//    }
//
//return 0;
//}



//Solve-D:
//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//
//    int n;
//    cin>>n;
//    int sum =0;
//    for(int i=1; i<=n; i++){
//
//        sum+= i;
//    }
//
//    cout<<sum<<endl;
//
//return 0;
//}
//




//Solve-E:
//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main(){
//
//    int n,k,x,y;
//
//    cin>>n>>k>>x>>y;
//
//    int sum =0;
//    int coun=0;
//
//    for(int i=1; i<=n; i++){
//        coun++;
//        sum+=x;
//        if(i==k){
//            break;
//        }
//    }
//
//    int remainder_time = n-coun;
//
//    for(int i=0; i<remainder_time; i++){
//
//        sum+=y;
//    }
//
//    cout<<sum<<endl;
//
//return 0;
//}



//Solve-F:
//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main(){
//    int a,b,c;
//
//    cin>>a>>b>>c;
//
//    if(a+b==c){
//        cout<<"Yes"<<endl;
//    }
//    else if(a+c==b){
//        cout<<"Yes"<<endl;
//    }
//    else if(b+c==a){
//        cout<<"Yes"<<endl;
//    }
//    else{
//        cout<<"No"<<endl;
//    }
//
//return 0;
//}



//Solve-G:
//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//
//    int a,b,c,d;
//    cin>>a>>b>>c>>d;
//
//    int f_area = a*b;
//    int s_area = c*d;
//
//    if(f_area>=s_area){
//        cout<<f_area<<endl;
//    }
//    else{
//        cout<<s_area<<endl;
//    }
//
//return 0;
//}




//Solve-H:
//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//
//    int n;
//    cin>>n;
//
//    int paid_money = n*800;
//
//    int n_money_divide =n/15;
//
//    int multiply = 200*n_money_divide;
//
//    int back_money = paid_money-multiply;
//
//    cout<<back_money<<endl;
//
//return 0;
//}



//Solve-I:
//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//
//    int a,b,c;
//
//    cin>>a>>b>>c;
//
//    int first = b-a;
//    int second = c-b;
//
//    if(first==second){
//        cout<<"YES"<<endl;
//    }
//    else{
//        cout<<"NO"<<endl;
//    }
//return 0;
//}




//problem: Third day:
//#include<bits/stdc++.h>
//using namespace std;
//
//int tringle(int b,int h){
//
//        int area =(b*h)/2;
//1
//       return area;
//}
//
//int main(){
//    int b,h;
//
//    cin>>b>>h;
//
//   int tringle_area = tringle(b,h);
//
//   cout<<tringle_area<<endl;
//
//return 0;
//}























