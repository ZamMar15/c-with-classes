#include <iostream>
using namespace std;

class Student
{
    string name;

public:
    Student()

    {
        cout << "unknown" << endl;
    }

    Student(string nam){
        name=nam;
        cout<<nam<<endl;
    }
};

int main()
{
    string name ="Ujjwal";
    Student u,u1(name);

    return 0;
}