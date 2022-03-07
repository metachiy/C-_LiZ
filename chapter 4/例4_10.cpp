#include <iostream>
using namespace std;

enum Level {FRESHMAN, SOPHOMORE, JUNIOR, SENIOR};
enum Grade {A, B, C, D};

class Student{
public:
    Student(unsigned number, Level level, Grade grade) : number(number), level(level), grade(grade){}
    void show();
//声明位域后，只需27+2+2=31位，四个字节即可存储
private:
    unsigned number : 27;
    Level level : 2;
    Grade grade : 2;
};

void Student::show(){
    cout << "Number : " << number << endl;
    cout << "Level : ";
    switch (level)
    {
    case FRESHMAN:
        cout << "freshman";
        break;
    case SOPHOMORE:
        cout << "sophmore";
        break;
    case JUNIOR:
        cout << "junior";
        break;
    case SENIOR:
        cout << "senior";
        break;
    }
    
    cout << endl << "Grade : ";
    switch (grade)
    {
    case A:
        cout << "A";
        break;
    case B:
        cout << "B";
        break;
    case C:
        cout << "C";
        break;
    case D:
        cout << "D";
        break;
    }
    cout << endl;
}

int main(){
    Student s(12345678, SOPHOMORE, B);
    cout << "Size of Student: " << sizeof(Student) << endl;
    s.show();

    return 0;
}

