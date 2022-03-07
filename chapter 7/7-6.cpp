#include <iostream>

using namespace std;

class Base1{
public:
    int var;
    void fun(){
        cout << "Member of Base1" << endl;
    }
};

class Base2{
public:
    int var;
    void fun(){
        cout << "Member of Base2" << endl;
    }
};

class Derived : public Base1, public Base2{
public:
    int var;
    void fun(){
        cout << "Member of Derived" << endl;
    }
};

int main(){
    Derived d;
    Derived *p = &d;
    
    //Derived类成员
    d.var = 1;
    d.fun();

    //Base1类成员
    d.Base1::var = 2;
    d.Base1::fun();

    //Base2类成员
    d.Base2::var = 3;
    d.Base2::fun();

    return 0;
}

