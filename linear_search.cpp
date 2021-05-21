// linear search in c ++ 
#include<iostream> 
using namespace std; 
int  linear_search(int arr[],int size,int target){
    int i; 
    
    for(i=0;i<=size;i++){
        if (arr[i]== target){
            return i; 


        }
         

        
    }
 return -1; 
}
int main(){
    int cars[6]={1,2,3,4,5,6}; 
    cout << linear_search(cars,6,4); 


}
