
//Solve-A:
//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//
//    int ar[4];
//
//    for(int i=0; i<4; i++){
//
//        cin>>ar[i];
//    }
//
//    int cut =0;
//
//    for(int i=0; i<4; i++){
//
//        if(ar[i]>9){
//            cut++;
//        }
//
//    }
//
//    cout<<cut<<endl;
//
//
//return 0;
//}


//Problem:B
//#include<bits/stdc++.h>
//using namespace std;
//
//
//
//int main(){
//
//    int t,n,q,I,J;
//    cin>>t;
//    cout<<endl;
//    cin>>n>>q;
//
//    int ar[n];
//
//    for(int i=0; i<n; i++){
//
//        cin>>ar[i];
//    }
//
//
//    for(int i=0; i<t; i++){
//
//        for(int j=0; j<q; j++){
//            cin>>I>>J;
//        }
//         cout<<endl;
//    }
//
//
//
//
//
//
//return 0;
//}




//#include <stdio.h>
//#include <string.h>
//#include <algorithm>
//#define min(a,b) a>b?b:a
//#define INF 0x3f3f3f3f
//using namespace std;
//int n,m;
//int tree[300005];//Why can't it be twice n?
//void build(int rt, int l, int r)//Use post-order traversal to build line segment tree
//{
//	if(l==r)//Enter it when it is a leaf node!
//	{
//		scanf("%d",&tree[rt]);//That is to enter the leaf node
//		return;
//	}
//	int mid=(l+r)>>1;//Find the middle value
//	int tp=rt<<1;//left child subscript
//	build(tp,l,mid);//Build the left subtree
//	build(tp|1,mid+1,r);//Build the right subtree
//	tree[rt]=min(tree[tp],tree[tp|1]);//Assign a value to the parent node
//}
//int find(int rt,int l,int r,int a,int b)
//{
//	if(a<=l&&b>=r)//If l, r are in the range of a, b, then output the value of the corresponding interval
//	{
//		return tree[rt];
//	}
//	int mid=(l+r)>>1;//take the value of the midpoint
//	int pt=rt<<1;//The right boundary of the left child
//	int res=INF;//Assignment in recursion has no effect!
//	if(mid>=a)
//	{//If the right boundary of the left child of the line segment tree is greater than a, there is an interval between a and b in the left subtree
//	//Then look for the smaller value in it
//		res=min(find(pt,l,mid,a,b),res);
//	}
//	if(mid<b)//If b>min, then it means that there are values ​​in the interval a, b in the right subtree, then
//	{//Find the smallest value in the right subtree
//		res=min(find(pt|1,mid+1,r,a,b),res);
//	}
//	return res;//Return is the minimum value
//}
//int main()
//{
//	int T;
//	int N;
//	scanf("%d",&T);
//	N=T;
//	while(T--)
//	{
//		printf("Case %d:\n",NT);
//		scanf("%d%d",&n,&m);
//		build(1,1,n);
//		while(m--)
//		{
//			int a,b;
//			scanf("%d%d",&a,&b);
//			printf("%d\n",find(1,1,n,a,b));
//		}
//	}
//	return 0;
//}




//Solve:F:
//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//
//    int a,b,c;
//    int cut=0;
//    cin>>a>>b>>c;
//
//    if(a>=1 && a<=100 && b>=1 && b<=100 && c>=1 && c<=100){
//
//    if(a!=b){
//        cut++;
//    }
//    if(a!=c){
//        cut++;
//    }
//    if(b!=c){
//        cut++;
//    }
//    if(a==b && a==c && b==c){
//        cut++;
//    }
//
//}
//
//    cout<<cut;
//
//return 0;
//}



//Solve:G:
//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//
//    int n,remainder,revNumber=0;
//    cin>>n;
//    int num=n;
//
//    while(n>0){
//
//        remainder = n%10;
//        n/=10;
//
//        revNumber =(revNumber*10)+remainder;
//    }
//
//    if(num==revNumber){
//        cout<<"Yes"<<endl;
//    }
//    else{
//        cout<<"No"<<endl;
//    }
//
//return 0;
//}




//Solve:H:
//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//
//    char st[200000];
//
//    cin>>st;
//
//    int A,Z;
//
//    for(int i=0; i<strlen(st); i++){
//            if(st[i]=='A'){
//                A = i; break;
//            }
//        }
//
//    for(int i=0; i<strlen(st); i++){
//            if(st[i]=='Z'){
//                Z = i;
//            }
//        }
//
//    int cut=0;
//    for(int i=A; i<=Z; i++){
//
//        cut++;
//    }
//
//    cout<<cut;
//
//return 0;
//}



//#include<bits/stdc++.h>
//using namespace std;
//
//void n_number(){
//
//    int n;
//    int ar[n];
//    cin>>n;
//    int cut[105]={0};
//    int ar2[n],j=0;
//
//    for(int i=0; i<n; i++){
//
//        cin>>ar[i];
//    }
//
//    for(int i=0; i<n; i++){
//
//        cut[ar[i]]++;
//    }
//
//    for(int i=0; i<=100; i++){
//
//        if(cut[i]!=0){
//           ar2[j] = cut[i];
//           j++;
//        }
//    }
//        int ans;
//    for(int i=0; i<j; i++){
//            ans = ar2[0];
//        if(ar2[i]>ans){
//            ans = ar2[i];
//        }
//    }
//
//    if(j==1){
//        ans =0;
//    }
//      cout<<ans<<endl;
//}
//
//
//int main(){
//
//    int t;
//    cin>>t;
//    for(int i=0; i<t; i++){
//
//        n_number();
//    }
//
//return 0;
//}



//
//
//
//#include<bits/stdc++.h>
//using namespace std;
//
//void n_number(){
//
//    int n;
//    int ar[n];
//    cin>>n;
//    int cut[105]={0};
//    int ar2[n],j=0;
//
//    for(int i=0; i<n; i++){
//
//        cin>>ar[i];
//    }
//
//    for(int i=0; i<n; i++){
//
//        cut[ar[i]]++;
//    }
//
//    for(int i=0; i<100; i++){
//
//        if(cut[i]!=0){
//            //sum += cut[i];
//           ar2[j] = cut[i];
//           j++;
//
//        }
//    }
//   // cout<<sum;
//
//        int ans;
//
//    for(int i=0; i<j; i++){
//
//            ans = ar2[0];
//        if(ar2[i]>ans){
//            ans = ar2[i];
//        }
//
//    }
//
////    int all_num = sum-ans;
////
////    cout<<all_num;
//
////    if(j==1){
////        ans =0;
////    }
////      cout<<ans<<endl;
//}
//
//
//int main(){
//
//    int t;
//    cin>>t;
//    for(int i=0; i<t; i++){
//
//        n_number();
//    }
//
//return 0;
//}


//
//Solve:C:
//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//    int t;
//    cin>>t;
//
//    for(int i=0; i<t; i++){
//            int n, l=0;
//            cin>>n;
//            int ar[n];
//            int arr2[n];
//
//            for(int j=0; j<n; j++){
//
//                cin>>ar[j];
//            }
//
//           for(int j=0; j<n; j++){
//
//                for(int k=0; k<n-1; k++){
//
//                        if(ar[k]>ar[k+1]){
//
//                        swap(ar[k],ar[k+1]);
//                    }
//                }
//
//
//            }
//
//            for(int i=0; i<n; i++){
//               if(ar[i]==ar[0]){
//                    arr2[l] = i;
//                    l++;
//
//               }
//            }
//
//                int ans;
//            for(int i=0; i<l; i++){
//
//                ans = arr2[i];
//            }
//
//            int number = n-(ans+1);
//
//            cout<<number<<endl;
//
//    }
//
//return 0;
//}





//
//solve:B:
//#include<bits/stdc++.h>
//using namespace std;
//
//int ar[100005];
//int tre[500000];
//
//int build_tree(int l,int r,int node)
//{
//
//	int x;
//	int y;
//
//	if(l == r) {
//		tre[node] = ar[l];
//		return ar[l];
//	}
//
//	x = build_tree(l, (l + r) / 2, node * 2);
//	y = build_tree((l + r) / 2 + 1, r, node * 2 + 1);
//
//	tre[node] = min(x, y);
//
//	return tre[node];
//}
//
//int query(int l,int r,int e,int f,int node)
//{
//	int x;
//	int y;
//
//	if(e <= l and f >= r) {
//		return tre[node];
//	}
//
//	if(e > r or f < l) {
//		return INT_MAX;
//	}
//
//	x = query(l, (l+r)/2, e, f, node * 2);
//	y = query((l+r)/ 2 + 1, r, e, f, node * 2 + 1);
//
//	return min(x, y);
//}
//
//
//int main()
//{
//	int t,n,q,I,J;
//
//
//	cin>>t;
//
//	for (int cs = 1; cs <= t; cs++) {
//
//		cin>>n>>q;
//
//		for (int i = 1; i <= n; i++) {
//
//			cin>>ar[i];
//		}
//
//		build_tree(1, n, 1);
//
//		cout<<"Case "<<cs<<":"<<endl;
//
//		for(int i = 0; i < q; i++) {
//
//			cin>>I>>J;
//
//			cout<<query(1, n, I, J, 1)<<endl;
//		}
//
//	}
//
//}








#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;

    for(int j=0; j<T; j++){
            int N,l=0;
            cin>>N;
            int ar[N];
            int s[N];
            int arr2[100]={0};

            for(int i=0; i<N; i++){

                cin>>ar[i];
            }


        for(int i=0; i<N; i++){

            arr2[ar[i]]++;
        }

        for(int i=0; i<100; i++){

            if(arr2[i]!=0){

               s[l] = arr2[i];
               l++;

            }
        }
            int ans;
        for(int i=0; i<l; i++){

            ans = s[0];
            if(s[i]>ans){
                ans = s[i];
            }

        }

            int number= N-ans;

            cout<<number<<endl;

    }

return 0;
}





























