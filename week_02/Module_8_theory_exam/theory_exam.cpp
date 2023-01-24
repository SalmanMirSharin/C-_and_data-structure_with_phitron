
//#include<bits/stdc++.h>
//using namespace std;
//
//class Restaurant{
//public:
//
//    int food_item_codes[12];
//    string food_item_names[12];
//    int food_item_prices[12];
//    double total_tax;
//
//
//    Restaurant(int food_item_codes[],string food_item_names[], int food_item_prices[]){
//
//            for(int i=0; i<12; i++){
//
//            this->food_item_codes[i] = food_item_codes[i];
//            this->food_item_names[i] = food_item_names[i];
//            this->food_item_prices[i] = food_item_prices[i];
//            this->total_tax =0.0;
//            }
//    }
//
//};
//
//Restaurant* restaurant(){
//
//    int food_item_codes[12];
//    string food_item_names[12];
//    int food_item_prices[12];
//        int n;
//        cin>>n;
//
//
//    for(int i=0; i<n; i++){
//
//        cin>>food_item_codes[i];
//        cin.ignore();
//        getline(cin,food_item_names[i]);
//        cin>>food_item_prices[i];
//
//
//    }
//    cout<<endl;
//    cout<<"\t\t\t"<<"__________MAKE BILL__________"<<endl<<endl;
//    cout<<"Item Code"<<"\t\t"<<"Item Name"<<"\t\t\t\t"<<"Item Price"<<endl;
//
//
//    for(int i=0; i<n; i++){
//
//        cout<<food_item_codes[i]<<" \t\t\t"<<food_item_names[i]<<" \t\t\t"<<food_item_prices[i]<<endl;;
//    }
//
//    Restaurant *restaurant = new Restaurant(food_item_codes,food_item_names,food_item_prices);
//    return restaurant;
//
//}
//
//
//int main(){
//
//
//    Restaurant *res = restaurant();
//
//    while(true){
//
//    cout<<endl<<endl;
//    int table_no,number_of_item,item_code[12],quantity[12];
//
//    cout<<"Enter Table NO: ";
//    cin>>table_no;
//    cout<<"Enter Number of Item: ";
//    cin>>number_of_item;
//
//        int item_code_store[12];
//        int item_quantity_store[12];
//        for(int i=0; i<number_of_item; i++){
//            cout<<"Enter Item "<<i+1<<" Code: ";
//            cin>>item_code[i];
//            cout<<"Enter Item "<<i+1<<" Quantity: ";
//            cin>>quantity[i];
//        }
//
//               for(int i=0; i<number_of_item; i++){
//
//                    item_code[i];
//                    quantity[i];
//
//        }
//
//        cout<<endl<<endl;
//
//
//        int total_price[12];
//        int total_sum =0;
//
//            cout<<"\t\t\t____________BILL SUMMARY____________"<<endl;
//
//        cout<<"Table No : "<<table_no<<endl;
//
//            cout<<"Item Code"<<" \t"<<"Item Name"<<" \t\t\t"<<"Item Price"<<" \t"<<"Item quantity"<<" \t"<<"Total Price"<<endl;
//            for(int i=0; i<number_of_item; i++){
//
//        for(int j=0; j<12; j++){
//                total_price[j] = res->food_item_prices[j]*quantity[i];
//
//            if(item_code[i]== res->food_item_codes[j]){
//
//
//
//                cout<<res->food_item_codes[j]<<" \t\t"<<res->food_item_names[j]<<" \t\t"<<res->food_item_prices[j]<<" \t\t"<<quantity[i]<<" \t\t"<<total_price[j]<<endl;
//                total_sum+=total_price[j];
//            }
//
//
//        }
//    }
//
//        cout<<"Tax"<<"\t\t\t\t\t\t\t\t\t\t";
//
//        res->total_tax = (total_sum/100.0)*5;
//        printf("%.2f",res->total_tax);
//
//cout<<endl;
//    cout<<"___________________________________________________________________________________________________________"<<endl;
//
//
//    cout<<"NET TOTAL"<<"\t\t\t\t\t\t\t\t\t";
//
//    double net_total = total_sum+res->total_tax;
//
//    printf("%.2f Taka",net_total);
//
//
//    cout<<endl<<endl;
//
//
//    }
//
//
// return 0;
//}




//Modify some code:



//Restaurant Project:
//
//
//#include<bits/stdc++.h>
//using namespace std;
//class Resturant
//{
//public:
//    int food_item_codes[12];
//    string food_item_names[12];
//    int food_item_prize[12];
//    double total_tax;
//    Resturant(int food_item_codes[],string food_item_names[],int food_item_prize[])
//    {
//        for(int i=0;i<12;i++)
//        {
//            this -> food_item_codes[i] = food_item_codes[i];
//            this -> food_item_names[i] = food_item_names[i];
//            this -> food_item_prize[i] = food_item_prize[i];
//            this -> total_tax = 0.0;
//        }
//    }
//};
//
//Resturant* resturent()
//{
//    int food_item_codes[12];
//    string food_item_names[12];
//    int food_item_prize[12];
//    int n;
//    cin>>n;
//
//    for(int i=0;i<n;i++)
//    {
//       cin>>food_item_codes[i];
//       cin.ignore();
//       getline(cin,food_item_names[i]);
//       cin>>food_item_prize[i];
//    }
//    cout<<endl;
//    cout<<"\t\t\t"<<"------------Make Bill-------------"<<endl<<endl;
//    cout<<"Item code"<<"\t\t"<<"Item name"<<"\t\t\t\t"<<"Item prize"<<endl;
//
//    for(int i=0;i<n;i++)
//    {
//        cout<<food_item_codes[i]<<" \t\t\t"<<food_item_names[i]<<"\t\t\t"<<food_item_prize[i]<<endl;
//    }
//
//    Resturant *resturant = new Resturant(food_item_codes,food_item_names,food_item_prize);
//    return resturant;
//}
//
//int main()
//{
//
//
//     Resturant *res = resturent();
//
//   while(true){
//
//    cout<<endl<<endl;
//    int table_no,Number_of_item,item_code[12],quantity[12];
//    cout<<"Enter Table No: ";
//    cin>>table_no;
//    cout<<"Enter Number of Item: ";
//    cin>>Number_of_item;
//
//    for(int i=0;i<Number_of_item;i++)
//    {
//        flag:
//        cout<<"Enter Iteam "<<i+1<<" code: ";
//        cin>>item_code[i];
//        bool check = false;
//
//        for(int j=0; j<12; j++){
//
//            if(item_code[i]== res->food_item_codes[j]){
//                check = true;
//            }
//
//        }
//
//        if(check==false){
//            cout<<endl;
//                cout<<"this code is not valid!"<<endl;
//            goto flag;
//
//        }
//
//        cout<<"Enter item "<<i+1<<" Quantity: ";
//        cin>>quantity[i];
//
//    }
//
//    cout<<endl<<endl;
//
//    int total_prize[12];
//    int total_sum =0;
//    cout<<"\t\t\t\t_______Bill Sumary______"<<endl;
//    cout<<"Table No: "<<table_no<<endl;
//    cout<<"Item Code"<<" \t"<<"Item Name"<<" \t\t\t"<<"Item Prize"<<" \t"<<"Item Quantity"<<" \t"<<"Total Prize"<<endl;
//    for(int i=0;i<Number_of_item;i++)
//    {
//        for(int j=0;j<12;j++)
//        {
//            total_prize[j] = res->food_item_prize[j] *quantity[i];
//            if(item_code[i] == res->food_item_codes[j])
//            {
//                cout<<res->food_item_codes[j]<<" \t\t"<<res->food_item_names[j]<<" \t\t"<<res->food_item_prize[j]<<" \t\t"<<quantity[i]<<"\t\t"<<total_prize[j]<<endl;
//                total_sum+=total_prize[j];
//            }
//
//        }
//    }
//
//    cout<<"Tax"<<"\t\t\t\t\t\t\t\t\t\t";
//
//    res->total_tax = (total_sum/100.0)*5;
//    printf("%.2f",res->total_tax);
//
//    cout<<endl;
//    cout<<"_________________________________________________________________________________________________________"<<endl;
//
//    cout<<"Net Total"<<"\t\t\t\t\t\t\t\t\t";
//    double net_total = total_sum+res->total_tax;
//    printf("%.2f Taka",net_total);
//    cout<<endl<<endl;
//
//   }
//
//    return 0;
//}












