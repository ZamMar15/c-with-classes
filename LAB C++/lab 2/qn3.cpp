#include <iostream>
using namespace std ; 
// function declaration with one argument float
inline float conversion(float);

int  main (){
    float a;
    cout<<"Enter the temperature in fahrenheit"<<endl;
    cin>>a;
    // calling function with passing one argument
    cout<<"the temperature in celcius is "<<conversion(a);
    
    return 0;
}
// called function 
inline float conversion(float x){
    //oneline function
    return(x-32)*5/9;

}