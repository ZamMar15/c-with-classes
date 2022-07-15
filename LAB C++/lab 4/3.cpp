#include <iostream>
using namespace std;

class AddAmount
{
    int amount = 50;

public:
    AddAmount()
    {

        cout << "the initial amount is : " << amount << endl;
    }

    AddAmount(int x)
    {
        amount += x;
        cout << "the final amount is : " << amount << endl;
    }
};

int main()
{
    AddAmount a, b(50);

    return 0;
}