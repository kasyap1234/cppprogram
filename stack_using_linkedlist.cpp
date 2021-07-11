class Node{
    int data ; 
    Node*next; 

}; 
Node*top; 
void push(int newdata){
    Node*temp; 

    temp=new Node(int newdata);
    temp->next=top; 
    top=temp; 
    

}
int main(){
   // simple driver code ; 
  
}
