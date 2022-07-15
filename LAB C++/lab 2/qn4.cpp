#include <iostream>
using namespace std ; 
inline double conversion(float);
int  main (){
    float a;
    cout<<"Enter the value in pound "<<endl;
    cin>>a;
    cout<<"the value in kilogram  is "<<conversion(a);
    
    return 0;
}
inline float conversion(float x){
    return x/0.453592;

}
