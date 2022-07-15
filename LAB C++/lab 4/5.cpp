#include <iostream>
using namespace std;
class SimpleIntrest
{
    int principle, time;
    float rate;
    public:
   SimpleIntrest(float r ){
    principle=2000;
    time=2;
    rate=r;

    cout<<"the simple intrest is "<<(principle*time*rate)/100<<endl;
   }
};

int main()
{
    
    SimpleIntrest s1(0.2);

    return 0;
}