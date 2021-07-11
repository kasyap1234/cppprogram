#include<iostream>
using namespace std; 
int queue[100]; 
int front=-1; 
int back=-1; 
int size=100; 

void insert(int x){
    if (back==size-1){
        cout<< "the queue is full "<< endl; 

    }
else{
     back++; 
    queue[back]=x; 
   

    
}

}
void print(){
    int i=0; 
    for(i=0;i<=back;i++){
        cout<< queue[i]<<endl; 

    }
}
void Delete(){
    if (front==back){
        cout<< "queue is empty "<<endl; 

    }
    else{
        front++; 

         queue[front]=NULL; 
         

    }
}
int main(){
    insert(2); 
    insert(4); 
    insert(6); 
    Delete(); 


    print(); 

}
