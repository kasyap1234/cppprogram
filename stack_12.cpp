#include<iostream>
using namespace std; 
#include<string>

class Stack{
int top; 
int stop; 
    
    
public:
    Stack(){
    top=-1; 
     stop=top;
        
    }
string a[10]; 
bool push(string s); 
    
void pop(); 
void isempty(); 
void isfull(); 
void printStack(); 
}; 

bool Stack::push(string s){
 
    
   
        top++; 
        
    a[top]=s ; 
stop++; 
    
        
        
    return true; 
    }
void Stack::printStack(){
 if(top==-1){
    cout<<"Stack is empty"<<endl; 
    }
    
    
while(top>-1){
cout<<a[top]<<endl;
top--;
}
top=stop; 
    
    

    


return; 
    
}
    
    

void Stack:: pop(){
if(top==-1){
   
    return ; 
    
 }
else{
string x; 
x=a[top--]; 
 
stop--; 
    
}
}





int main(){
int n; 
cin>>n; 
int m; 
cin>>m ; 
    class Stack st; 

    
for(int i=0;i<=n;i++){
    string s; 
    getline(cin, s);
    
st.push(s); 
}
    st.printStack(); 
    
    for(int i=0;i<=m;i++){
        st.pop(); 
        
    }
    
    
    st.printStack(); 
    
}
