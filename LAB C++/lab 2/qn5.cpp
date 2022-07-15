#include <iostream>
using namespace std ; 
 int power(int,int); // function prototype has two arguments
int  main (){
    int n,m;
    cout<<"Enter a number"<<endl;
    cin>>n;
    cout<<"the power is  is "<<power(n,2);// one value is scanned while the other value is directly passed
    
    return 0;
}
 int power(int x,int y){
     int i,rem=1;
     for(i=1;i<=y;i++){
        rem =(x*rem); 
     }
       return rem;  // will return the remainder as fucntion is int (requires return type)

}

