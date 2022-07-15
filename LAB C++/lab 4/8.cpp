#include <iostream>
using namespace std;
class time
{
    int hours, minutes, seconds;

public:
    time()
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
    time(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }
    void display()
    {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
    time add(time t)
    {
        time temp;
        temp.seconds = seconds + t.seconds;
        temp.minutes = minutes + t.minutes + (temp.seconds / 60);
        temp.hours = hours + t.hours + (temp.minutes / 60);
        temp.minutes = temp.minutes % 60;
        temp.seconds = temp.seconds % 60;
        return temp;
    }
};

int main()
{
    time a, b(2, 3, 4), c;
    a.display();
    b.display();
    c = a.add(b);
    c.display();

    return 0;
}