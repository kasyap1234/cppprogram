

#include<iostream>


using namespace std;

// array elements will be given we need to insert it into a hashtable to reduce the time complexity
// for searching an element

void  insert(int a[],int hashtable[1000][2]){

  for(int i=0;i<n;i++){
    if(a[i]>0){
      hashtable[a[i]][0]=true;

    }
    else{
      hashtable[a[i]][1]=true;

    }


  }

}
bool search(int x,int hashtable[][]){
  if(x>=0){
    return hashtable[x][0];

  }
  else{
    return hashtable[abs(x)][1];

  }
}
int main(){
  bool hashtable[1000][2];
  int arr[]={1,45,-31,12,14};
  int size=5;
  insert(arr,hashtable[1000][2]);
  search(45,hashtable[1000][2]);
  

}
