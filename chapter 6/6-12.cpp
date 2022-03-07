#include <iostream>
using namespace std;

class Point{
private:
    int x, y;

public:
    Point(int x, int y) : x(x), y(y){}
    int getX(){
        return x;
    }
    int getY(){
        return y;
    }
};

int main(){
    Point a(4, 5);
    Point *p1 = &a;

    cout << p1->getX() << endl;
    cout << a.getX() << endl;

    return 0;
}

