#include <iostream>
using namespace std;
class Rectangle
{
    int length;
    int breadth;

public:
    Rectangle()
    {
        length = 0;
        breadth = 0;
      
    }
    Rectangle(int x, int y)
    {
        length = x;
        breadth = y;
        
    }
    Rectangle(int z)
    {
        length = z;
        breadth = z;
      
    }

    int Area()
    {
        return length * breadth;
    }
   
};

int main()
{
    Rectangle a1;
    a1.Area();
     cout<<"the area is "<<a1.Area()<<endl;
    

    Rectangle a2(3, 4);
    a2.Area();
     cout<<"the area is "<<a2.Area()<<endl;
     

    Rectangle a3(3);
    a3.Area();
     cout<<"the area is "<<a3.Area()<<endl;
     
   

    return 0;
}