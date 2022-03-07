#include "Point.h"

class Rectangle : public Point{
private:
    float w, h;
    
public:
    void initRectangle(float x, float y, float w, float h){
        initPoint(x, y);
        this->w = w;
        this->h = h;
    }
    
    float getW(){
        return w;
    }

    float getH(){
        return h;
    }
};

