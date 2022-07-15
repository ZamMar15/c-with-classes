#include <iostream>
using namespace std ; 
inline int greatest (int,int,int);
int main (){
    int a,b,c;
    cout<<"Enter three numbers"<<endl;
    cin>>a>>b>>c;
    
    cout<<"the greatest is ="<<greatest(a,b,c);
    
    return 0;
}
inline int greatest(int x,int y,int z){
    return (x>y)?(x>z?x:z):(y>z?y:z4);

}