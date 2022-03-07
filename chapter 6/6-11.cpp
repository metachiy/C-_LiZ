#include <iostream>
using namespace std;

const float PI = 3.14159f;
const float TWO_PI = PI * 2.0f;

void printfStuff(float){
    cout << "This is the print stuff function." << endl;
}

void printMessage(float data){
    cout << "The data to be listed is " << data << endl;
}

void printFloat(float data){
    cout << "The data to be printed is " << data << endl;
}

int main(){
    void (*functionPointer)(float);
    printfStuff(PI);

    functionPointer = printfStuff;
    functionPointer(PI);

    functionPointer = printMessage;
    functionPointer(TWO_PI);
    functionPointer(13);
    functionPointer = printFloat;
    functionPointer(PI);
    printFloat(PI);

    return 0;
}

