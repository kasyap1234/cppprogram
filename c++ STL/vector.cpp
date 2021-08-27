#include<bits/stdc++.h>
using namespace std; 

int main(){
	vector<int>v1; 
	for(int i=1;i<6;i++)
		v1.push_back(i);
	

	for(auto i=v1.begin();i!=v1.end(); i++)
		cout<<*i<<" "; 
	// dereferencing the pointer i ; 
	cout<<" "<<endl; 
	cout<<v1.size()<<endl; 
	

}
