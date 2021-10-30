#include<iostream>
#include<unordered_set>
#include<iterator>

using namespace std;
int main(){
  unordered_set<int>set;
  set.insert(20);
  set.insert(15);
  set.insert(29);
  set.insert(40);

  for(auto it=set.begin();it!=set.end();it++){
    cout<<*it<<endl;

  }
  cout<<set.size()<<endl;
  
  int key=15;


 if(set.find(key)!=set.end()){
   cout<<" key found "<<endl;
 }
 else{
   cout<<"key not found"<<endl;

 }

}
