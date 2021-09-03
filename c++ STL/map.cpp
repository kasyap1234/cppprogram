#include<bits/stdc++.h>
using namespace std; 
int main(){
	map<int,int>mp; 
	mp.insert(pair<int,int>(1,40)); 
	mp.insert(pair<int,int>(2,50)); 
    for( auto itr=mp.begin();itr!=mp.end();itr++){
    	cout<<itr->first<<"----"; 

    	cout<<itr->second<<endl;


    }
    
}
