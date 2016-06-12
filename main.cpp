#include <iostream>

using namespace std;

class Point
{
//private:
//    int x, y;
public:
    int x,y;

    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void MovePoint(int a ,int b)
    {
        x += a;
        y += b;
    }
    void print()
    {
        cout << x << "" << y <<endl;
    }
};

int main()
{
    const Point point(1,2);
    //point.MovePoint(1,2);
    point.x = 1;
    return 0;
}

