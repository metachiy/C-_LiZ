#include <iostream>
using namespace std;

class Point{
private:
    int x, y;

public:
    Point(int x, int y) : x(x), y(y){}
    int getX() const{
        return x;
    }
    int getY() const{
        return y;
    }
};

//访问对象的公有成员函数的不同方式
int main(){
    Point a(4, 5);
    Point *p1 = &a;
    //定义成员函数指针并初始化
    int (Point::*funcPtr)() const = &Point::getX;

    cout << (a.*funcPtr)() << endl;     //使用成员函数指针和对象名访问成员函数
    cout << (p1->*funcPtr)() << endl;   //使用成员函数指针和对象指针访问成员函数
    cout << a.getX() << endl;           //使用对象名访问成员函数
    cout << p1->getX() << endl;         //使用对象指针访问成员函数

    return 0;
}

