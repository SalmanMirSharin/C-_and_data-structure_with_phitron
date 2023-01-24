
#include<bits/stdc++.h>
#include"MEHEDI_STACK.h"
using namespace std;

int main(){
        Stack <float> st;

        st.Push(2.5);
        st.Push(5.3);
        st.Push(3.5);
        st.Push(5.2);
        st.Push(6.8);
        st.Push(7.9);

        cout<<st.mid()<<endl;

return 0;
}
