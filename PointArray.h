#ifndef POINTARRAY_H_INCLUDED
#define POINTARRAY_H_INCLUDED

class Point
{
private:
    int x, y;
public:
    Point(int x1 = 0, int y1 = 0);
    Point(Point &o);
    int getX() const;
    int getY() const;
    void setX(const int &x2);
    void setY(const int &y2);

};

class PointArray
{
private:
    void resize(const int &newLen);
    Point* firstPoint;
    int len;

public:
    PointArray();
    PointArray(const Point points[], const int &<Size);
    PointArray(const PointArray &pv);
    ~PointArray();
    void showPoint(const int &pos);
    void pushBack(const Point &p);
    void insert(const int &position, const Point &p);
    void remove(const int &position);
    const int getSize() const;
    void clear();
    Point* get(const int &position);
    const Point* get(const int &position) const;


#endif // POINTARRAY_H_INCLUDED
