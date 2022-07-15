#include<iostream>
using namespace std; 

class Area {
    int length;
    int breadth;
    public:
    Area(int a){
        length=a;
        cout<<"the area of square is "<<length*length<<endl;


    }
    Area(int a,int b){
        length=a;
        breadth=b;
        cout<<"the area of rectangle is "<<length*breadth<<endl;


    }

};

int main(){
    Area s1(2),s2(3,4);
    
return 0;
}