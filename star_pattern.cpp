#include<iostream>
using namespace std;
int main(){
      int rows, columns;
      cout<< "enter the number of rows"<<endl;
      cin >> rows;
      cout<<"enter the number of columns"<<endl;
      cin>> columns ;
      int i,j;
      for(i=0;i<rows;i++){
            for(j=0;j<columns;j++){
                  cout<<"* "; 
            }
            cout<<"\n";

      }

}
