
#include<bits/stdc++.h>
#include"MYSTACK.h"
using namespace std;

int main(){
    Stack<int> st;

    string check;
     cin>>check;

     for(int i=check.length()-1; i>=0; i--){

            if(check[i]>='0' &&  check[i]<='9'){

                    st.Push(check[i]-'0');
            }
            else{
                int a = st.Pop();
                int b = st.Pop();

                switch(check[i]){

                    case '+':
                        st.Push(a+b);
                        break;
                    case '-':
                        st.Push(a-b);
                        break;
                    case '*':
                        st.Push(a*b);
                        break;
                    case '/':
                        st.Push(a/b);
                        break;
                    case '^':
                        st.Push(pow(a,b));
                        break;
                    default:
                        break;

                }
            }
     }

        cout<<st.Top();


return 0;
}



//#include<bits/stdc++.h>
//#include"MYSTACK.h"
//
//using namespace std;
//
//int precisioncalc(char c){
//        if(c=='^'){
//            return 3;
//        }
//        else if(c=='*' || c=='/'){
//            return 2;
//        }
//        else if(c=='+' || c=='-'){
//            return 1;
//        }
//        else{
//            return -1;
//        }
//}
//
//string infixToprefix(string chk){
//        reverse(chk.begin(),chk.end());
//        Stack<char> st;
//        string result;
//
//        for(int i=0; i<chk.length(); i++){
//
//            if(chk[i]>='0' && chk[i]<='9'){
//                result+= chk[i];
//            }
//            else if(chk[i]==')'){
//                st.Push(chk[i]);
//            }
//            else if(chk[i]=='('){
//
//                while(!st.Empty() && st.Top()==')'){
//                        result+=st.Pop();
//                }
//                if(st.Empty()){
//                    st.Pop();
//                }
//            }
//            else{
//                while(!st.Empty() && precisioncalc(st.Top())>=precisioncalc(chk[i])){
//                        result+=st.Pop();
//                }
//                st.Push(chk[i]);
//            }
//        }
//
//        while(!st.Empty()){
//            result+=st.Pop();
//        }
//    reverse(result.begin(),result.end());
//    return result;
//
//}
//
//int main(){
//
//    string infix = "(7+(4*5))-(2+0)";
//
//    string prefix = infixToprefix(infix);
//
//
//        cout<<prefix<<endl;
//
//
//return 0;
//}
//
//
//






