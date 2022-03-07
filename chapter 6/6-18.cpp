#include <iostream>
#include <cassert>
using namespace std;

class Point{
private:
    int x, y;

public:
     Point() : x(0), y(0){
        cout << "Default Constructor called." << endl;
     }

    Point(int x, int y) : x(x), y(y){
        cout << "Constructor called." << endl;
    }

    ~Point(){
        cout << "Destructor called." << endl;
    }

    void move(int newX, int newY){
        x = newX;
        y = newY;
    }
};

class ArrayOfPoints{
private:
    Point *points;
    int size;

public:
    ArrayOfPoints(int size) : size(size){
        points = new Point[size];
    }

    ~ArrayOfPoints(){
        cout << "Deleting......" << endl;
        delete[] points;
    }
    //返回引用类型
    Point &element(int index){
        assert(index >= 0 && index < size); //如果数组下标越界，程序终止
        return points[index];
    }
};

int main(){
    int count = 2;
    cout << "Please enter the count of points: " << endl;
    cin >> count;

    ArrayOfPoints points(count);
    points.element(0).move(5, 0);
    points.element(1).move(15, 20);

    return 0;
}

