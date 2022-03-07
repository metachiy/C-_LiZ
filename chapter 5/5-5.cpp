#include <iostream>
using namespace std;

class Point
{
public:
    Point(int xx = 0, int yy = 0){
        x = xx;
        y = yy;
        count ++;
    }

    Point(Point &p);

    int getX(){
        return x;
    }

    int getY(){
        return y;
    }

    ~Point(){
        count --;
    }

    static void showcount(){
        cout << "Object count = " << count << endl;
    }

private:
    int x, y;
    static int count;    
};

//类内声明，类外初始化
//所有对象共享同一份数据
//在编译阶段分配内存
int Point::count = 0;

Point::Point(Point &p){
    x = p.x;
    y = p.y;
    count ++;
    cout << "Calling the copy constructor of Point" << endl;
}

int main(){
    Point a(4, 5);

    cout << "Point A: " << a.getX() << ", " << a.getY() << endl;
    Point::showcount();

    Point b = a;
    cout << "Point B: " << b.getX() << ", " << b.getY() << endl;
    Point::showcount();

    return 0;
}

