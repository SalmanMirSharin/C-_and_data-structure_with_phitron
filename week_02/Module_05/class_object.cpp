// First video:
//#include<bits/stdc++.h>
//using namespace std;
//
//class Student{
//public:
//    char name[100];
//    int roll;
//
//};
//
//int main(){
//
//    Student s1;
//
//    strcpy(s1.name,"Abir Hasan");
//    s1.roll = 50;
//
//    cout<<s1.name<<" "<<s1.roll;
//
//return 0;
//}


//second video:
//#include<bits/stdc++.h>
//using namespace std;
//
//class Student{
//
//public:
//    int x;
//
//private:
//    int y;
//
//protected:
//    int z;
//
//
//};
//
//int main(){
//
//    Student rahim;
//
//    rahim.x = 10;
//
//   cout<<rahim.x;
//
//
//return 0;
//}


//Third Video:
//#include<bits/stdc++.h>
//using namespace std;
//
//class Example{
//
//private:
//    int x;
//    int pass;
//
//public:
//    Example(int p){
//        pass = p;
//    }
//    void setter(int a, int p){
//        if(pass==p){
//            x =a;
//        }
//        else{
//            cout<<"Password didn't match"<<endl;
//        }
//
//
//    }
//
//    int getter(int p){
//
//       if(pass==p){
//            return x;
//       }
//       else{
//        cout<<"Passowrd didn't match"<<endl;
//        return -1;
//       }
//    }
//
//};
//
//int main(){
//
//    Example s1(1234);
//    s1.setter(1500,1236);
//    cout<<s1.getter(1234)<<endl;
//
//
//return 0;
//}
//



//Fourth video:
//#include<bits/stdc++.h>
//using namespace std;
//
//class parent{
//public:
//    int x;
//private:
//    int y;
//protected:
//    int z;
//
//public:
//    parent(int a,int b,int c){
//
//        x=a;
//        y=b;
//        z=c;
//
//    }
//
//    void pr_data(){
//        cout<<"Private Data: "<<y<<endl;
//    }
//};
//
//class child: public parent{
//
//public:
//    int xx;
//
//    child(int aa,int a,int b, int c) : parent(a,b,c)
//    {
//
//        xx=aa;
//    }
//
//    void pt_data(){
//
//        cout<<"Protected value: "<<z<<endl;
//    }
//
//
//};
//
//int main(){
//
//    parent pt(10,20,30);
//    child ch(100,10,20,30);
//    ch.pr_data();
//    ch.pt_data();
//
//
//return 0;
//}


//Fifth video:
//#include<bits/stdc++.h>
//using namespace std;
//
//class Example{
//
//public:
//    int add(int x, int y){
//
//        return x+y;
//    }
//
//    double add(double x, double y){
//
//        return x+y;
//    }
//
//    void add(char x[],int n){
//
//        cout<<"Hi "<<x<<endl;
//    }
//
//};
//
//int main(){
//
//    Example ex;
//
//    ex.add("Mehedi",7);
//
//return 0;
//}



//#include<bits/stdc++.h>
//using namespace std;
//
//class parent{
//private:
//    int taka;
//public:
//    parent(int tk){
//
//        taka = tk;
//    }
//
//    friend class f_friend;
//};
//
//class f_friend{
//
//public:
//    void tellSecret(parent *ptr){
//
//        cout<<ptr->taka<<endl;
//    }
//
//};
//
//int main(){
//
//    parent pt(1500);
//    f_friend fre;
//    fre.tellSecret(&pt);
//
//return 0;
//}




//Six video:
//#include<bits/stdc++.h>
//using namespace std;
//
//class parent{
//private:
//    int taka;
//protected:
//    int pass;
//public:
//    parent(int tk, int pss){
//        taka = tk;
//        pass = pss;
//    }
//
//    friend void tellSecret(parent *ptr);
//};
//
//void tellSecret(parent *ptr){
//
//    cout<<ptr->taka<<" "<<ptr->pass<<endl;
//}
//
//int main(){
//
//    parent pt(1500,2345);
//    tellSecret(&pt);
//
//
//return 0;
//}



#include<bits/stdc++.h>
using namespace std;

int main(){

    class A
{
	int i;
	A()
	{
		i=0; cout&lt;&lt;i;
	}
	A(int x=0)
	{
		i=x;  cout&lt;&lt;I;
	}
};
A obj1;


return 0;
}














