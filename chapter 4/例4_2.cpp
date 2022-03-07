#include <iostream>
using namespace std;

class Point
{
public:
    Point(int xx = 0, int yy = 0){
        x = xx;
        y = yy;
    }

    Point(Point &p); //复制构造函数

    int getX(){
        return x;
    }

    int getY(){
        return y;
    }

private:
    int x, y;
};

Point::Point(Point &p){
    x = p.x;
    y = p.y;
    cout << "Calling the copy constructor" << endl;
}

void fun1(Point p){
    cout << p.getX() << endl;
}

Point fun2(){
    Point a(1, 2);
    return a;
}

int main(){
    Point a(4, 5);
    Point b = a;  //情况一
    cout << b.getX() << endl; 
    fun1(b); //情况二
    b = fun2(); //情况三
    cout << b.getX() << endl;

    return 0;
}

