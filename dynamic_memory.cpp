#include<stdio.h>
int main(){
    int a =10; // stored in stack 
    int *p=new int(); // creates space for an integer  in the heap ; 
    *p=34; 
    delete(p); 
    p=NULL; // removes the pointer to the deleted data space ; 
    
    
}
