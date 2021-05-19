// floyd's triangle 
#include<iostream> 
using namespace std; 
int main(){
  int n; 
  cin >> n; 
  int i; 
  int count=1; 

  int j; 
  for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
      cout<<count; 
      count++; 

    }
    cout << "\n"; 
    
  }
}
