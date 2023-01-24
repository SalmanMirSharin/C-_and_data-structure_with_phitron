
#include<bits/stdc++.h>
using namespace std;
template <typename T, typename T2>
T2 sum(T a,T b, T2 c){

    T2 s = (a+b)*c;

    return s;
}

int main(){

    int a=10, b=20;
    double c=2.11;

    double s1 = sum<int>(a,b,c);
    cout<<s1<<endl;

//    double x =2.4, y = 3.5;
//
//    double s2 =sum<double>(x,y);
//
//    cout<<s2<<endl;

return 0;
}
