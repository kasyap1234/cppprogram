#include<iostream>
using namespace
#include<unordered_map>
#include<unordered_set>
int main(){
  unordered_map<int,int>umap;
  int arr[]={2,3,3,3,4,4,5,5,1,1,1,7,0,0,0};
  for(int i=0;i<15;i++){
    umap[arr[i]]++;
  }
  for(auto it=umap.begin();it!=umap.end();it++){
    cout<<it->first<<" : "<<it->second<<endl;
    
  }
}
