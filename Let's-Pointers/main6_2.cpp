#include <iostream>
using namespace std;

void printhello(const char* name){
    cout<<"Hello World! "<<name<<endl;
}

int add(int x, int y){
    return x + y;
}
int main(){
    //pointers can point to data and functions
    //as the functions are the code(text) that is also there in memory
    //every instruction has an address and function is the group of instructions
    //instructions are contiguous in memory and function pointer is the entry point or base address of first instruction of function
    
    int (*p)(int,int);//same as *p(int,int)//type casting to function of two arguments
    p=add;//same as p=&add//function name is return pointer to that function
    cout<<p(2,3)<<endl;//same as (*P)(2,3)//dereferenceing and exicuting function//these operations are same as array operations

    void (*ptr)(const char*);//strings in cpp is always array of const char
    ptr=printhello;
    cout<<ptr<<endl;
    ptr("Tom");//like array operations

    const char* cp;
    cp="yahya";
    cout<<cp<<endl;//print yahya only because of cout syntax

    


    return 0;
}