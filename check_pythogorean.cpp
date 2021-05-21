#include<iostream> 
using namespace std; 
bool check(int x , int y, int z ){
    int a = max(x,max(y,z)); 
   int b; 
   int c ; 
   if (a==x){
       b=y; 
       c=z; 
   }
   elif(a==y){
       b=x; 
       c=z; 

   }
   else{
       b=x; 
       c=y; 

   }
   if(b^2 + c^2==a^2){
       return true ; 


   }else{
       return false; 
   }
   }
int main(){
    int x,y,z; 
    cin >> x >> y >> z  ; 
    if (check(x,y,z)==true){
        cout << " pythagorean triplet "

    }
    else{cout << "not  a  pythagorean triplet "; 
    }

}
