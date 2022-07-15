#include <iostream>
using namespace std;
// functiion overload  means using  same function name at multple place for multiple task 
void multiply();
int multiply(int,int);
int multiply (int,int,int);
int main (){
    int a,b,c; 
    cout<<"enter the numbers to multiply"<<endl;
    cin>>a>>b>>c;
    cout<<"the product is :"<<multiply(a,b,c)<<endl; // function calling as passing a b c
    cout<<"the product is :"<<multiply(a,b)<<endl; // function calling as passing a b 
     multiply(); // calling the non return function 

    return 0;
}

void multiply(){    // called function
    int a,b;
      cout<<"Enter two numbers:"<<endl;
      cin>>a>>b;
      cout<<"The product is = "<<a*b; 
}
int multiply (int x,int y,int z){
    return x*y*z;
}
int multiply (int p,int q){
    return p*q;
}
