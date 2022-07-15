#include <iostream>
using namespace std;

class Area
{
    int length;
    int breadth;

public:
    Area(int a, int b)
    {
        length = a;
        breadth = b;
    }

    Area(Area &obj)
    { // copy constructor with a Area obj as parameter
        length = obj.length;
        breadth = obj.breadth;
    }

    int calaculateProduct()
    {
        return length * breadth;
    }
};

int main()
{
    Area s2(3, 4);
    s2.calaculateProduct();
    Area s3 = s2; // copy content of s2 to s1

    cout << "the area of s2 is " << s2.calaculateProduct() << endl;

    cout << "the area of s3 is " << s3.calaculateProduct() << endl;

    return 0;
}