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
};

int Point::count = 0;

int main(){
    Point a(4, 5); 
    int *ptr = &Point::count;
    cout << "Point A: " << a.getX() << "," << a.getY() << endl;
    cout <<"Object count = " << *ptr << endl;

    Point b(a);
    cout << "Point B: " << b.getX() << "," << b.getY() << endl;
    cout <<"Object count = " << *ptr << endl;

    return 0;
}

