#include <iostream>
using namespace std ;
inline int multiply (int,int);
int main (){
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    cout<<"the product is "<<multiply(a,b);
    
    return 0;
}
inline int multiply(int x,int y){
    return x*y;

}