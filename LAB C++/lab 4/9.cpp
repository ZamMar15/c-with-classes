#include<iostream>
using namespace std; 
 class Complex{
        int a,b;
        public:
        Complex(){
            a=12;
            b=12;
        }

        void PrintNumber(){
            cout<<"the sum of complex number is"<<a<<"+"<<b<<"i"<<endl;
        }
    };
    

int main(){
   Complex c;
   c.PrintNumber();
  

    
return 0;
}