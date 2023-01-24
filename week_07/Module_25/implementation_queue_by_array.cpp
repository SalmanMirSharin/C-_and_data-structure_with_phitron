
#include<bits/stdc++.h>
#define N 5
int q_ueue[N];
int fornt = -1;
int rear = -1;
using namespace std;

void en_queue(int x){

    if(rear==N-1){
        cout<<"Overflow"<<endl;
    }
    else if(fornt==-1 && rear==-1){

            fornt=rear=0;
            q_ueue[rear] = x;
    }
    else{
        rear++;
        q_ueue[rear] = x;
    }
}

void de_queue(){
    if(fornt==-1 && rear==-1){
            cout<<"Underflow"<<endl;
    }
    else if(fornt==rear){
        fornt=rear=-1;
    }
    else{
        //cout<<"front value is: "<<q_ueue[fornt];
        fornt++;

    }
}

void display(){
    int i;
    if(fornt==-1 && rear==-1){
        cout<<"list is Empty"<<endl;
    }
    else{
        for(i=0; i<rear+1; i++){
            cout<<q_ueue[i]<<" ";
        }
    }
}

void peek(){
    if(fornt==-1 && rear==-1){
        cout<<"list is emmpty"<<endl;
    }
    else{
        cout<<q_ueue[fornt]<<endl;
    }
}

int main(){

    en_queue(1);
    en_queue(5);

    en_queue(10);
    //display();
    //peek();
    de_queue();
    de_queue();

     display();



return 0;
}
