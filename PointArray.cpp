#include <iostream>
#include <cmath>
#include "PointArray.h"

class Point{
public:
    double x,y;
};
class PointArray{
private:
    int tam;
    Point *points_;
public:
    PointArray(const Point points[],const int Size){
        this -> tam = Size;
        points_ = new Point[Size]
        int i;
        for (i=0;i<Size;++i){
            points_[i]=points[i]
        }
    }
    PointArray(const PointArray& pv){
        points_= new int[pv.tam];
        tam = pv.tam;
        for (int i=0;i<tam;++i)
            points_[i] = pv.points_[i];
    }
    
};