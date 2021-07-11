class Node{
    int data ; 
    Node*connect; 

}; 
Node*top; 
void push(int newdata){
    Node*temp; 

    temp=new Node(int newdata);
    temp->connect=top; 
    top=temp; 
    

}
int main(){
   // simple driver code ; 
  
}
