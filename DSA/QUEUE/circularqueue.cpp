#include<iostream>
using namespace std;
int maxsize=5;
int cq[5];
int front =-1;
int rear = -1;

void enqueue(int val){
    if((rear+1)%maxsize==front){
        cout<<"queue is overflow"<<endl;
        return;
    } 
    else{
    if(rear == -1 && front ==-1){
        rear= 0;
         front =0;
    }
    else{
        rear= (rear+1)%maxsize;
    }
    cq[rear]= val;
}
}
void dequeue(){
    if(rear== -1 && front==-1){
        cout<<"queue is underflow"<<endl;
        return;
    }
    else {
        int x = cq[front];
        cout<< "the dequeued element :"<< x<<"\n";
        
    if( front==rear){
        front= -1;
        rear= -1;
    }
    else{
        front = (front+1)%maxsize;
    } 
} 
}
 void display(){
    if(rear== -1 && front==-1){
        cout<<"queue is empty"<<endl;
    }
    else{
        for(int i=front ; i != rear; i= (i+1)%maxsize){
            cout<<cq[i] <<" ";
        }
            cout<< cq[rear];
    }
 }
  int main(){
    enqueue(5);
    enqueue(4);
    enqueue(3);
    enqueue(3);
    display();
    dequeue();
    dequeue();
    dequeue();
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    return 0;
   
  }