#ifndef POINT_H
#define POINT_H

class Point {
private:
    int x; //x��ǥ
    int y; //y��ǥ

public:
    Point(int x, int y);
    int getX() const;
    int getY() const;
};

#endif

