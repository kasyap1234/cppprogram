#include<iostream>
using namespace std; 
class Student{
public: 
string name; 
int RollNo; 

void printinfo(){
    cout<<name<<endl;
    cout<<RollNo<<endl; 


}







}; 
int main(){
    Student s1; 
    s1.name="Kasyap"; 
    s1.RollNo=17; 
    s1.printinfo(); 

}
