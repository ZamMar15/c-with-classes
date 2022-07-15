#include <iostream>
 
using namespace std;
  
int main(){
    int a, b, i, result = 1;
     
 cout << "Enter two numbers \n";
    cin >> a>>b;
     
    // Calculate base^exponent by repetitively multiplying base
    for(i = 0; i < b; i++){
        result = result * a;
    }
      
    cout << a << "^" << b<< " = " << result;
     
    return 0;
}