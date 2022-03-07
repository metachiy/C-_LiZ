#include <iostream>
using namespace std;

class Point{
private:
    int x, y;

public:
    static int count;

    Point(int x, int y) : x(x), y(y){
        count ++;
    }

    Point(const Point &p) : x(p.x), y(p.y){
        count ++;
    }

    ~Point(){
        count --;
    }

    int getX() const{
        return x;
    }
    int getY() const{
        return y;
    }
    static void showCount(){
        cout << "Object count = " << count << endl;
    }
};

int Point::count = 0;

int main(){
    Point a(4, 5); 
    void (*ptr)() = Point::showCount;
    cout << "Point A: " << a.getX() << "," << a.getY() << endl;
    ptr();

    Point b(a);
    cout << "Point B: " << b.getX() << "," << b.getY() << endl;
    ptr();

    return 0;
}

