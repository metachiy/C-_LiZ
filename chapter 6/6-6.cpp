#include <iostream>
using namespace std;
//void类型指针可以存储任何类型的对象地址
int main(){
    void *pv;
    int i = 5;
    pv = &i;
    int *pint = static_cast<int *>(pv);
    cout << "*pint = " << *pint << endl;

    return 0;
}

