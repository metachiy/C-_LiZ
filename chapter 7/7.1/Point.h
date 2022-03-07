class Point{
private:
    float x, y;

public:
    void initPoint(float x = 0, float y = 0){
        this->x = x;
        this->y = y;
    }

    void move(float offX, float offY){
        x += offX;
        y += offY;
    }

    float getX(){
        return x;
    }

    float getY(){
        return y;
    }
};

