// sum of integer overloading using constructor overloading
#include<iostream>
using namespace std; 
 class sum{
        int add;
        public:
        sum(int a,int b){
          add=a+b;
        }
           sum(){
          add=0;
        }

        void display (){
            cout<<"the sum of a and b is "<<add<<endl;
        }


    };


int main(){
    sum s(1,3),s2;
    s.display();
    s2.display();
   
    
return 0;
}