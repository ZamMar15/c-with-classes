#include <iostream>
using namespace std;
int getarea(int,int);
int main(){
    int a,b;
    cout<<"the area is "<<area(a,b);   
}
 int area(int length,int breadth){
     cout<<"enter the length and breadth\n";
     cin>>length>>breadth;
     return length*breadth;
 }