#include <iostream>
#include <cmath>
#include "PointArray.h"

using namespace std;

int Point::getX() const{
    return x;
}

int Point::getY() const{
    return y;
}

void Point::setX(const int &x2){
    x = x2;
}

void Point::setY(const int &y2){
    y = y2;
}
PointArray::PointArray(){
    len = 0;
    firstPoint = new Point[0];
}
PointArray::PointArray(const Point points[], const int &Size){
    len = Size;
    firstPoint = new Point[Size];
    int i;
    for (i=0;i<Size;i++){
        firstPoint[i] = points[i];
    }
}
PointArray::PointArray(const PointArray &pv){
    len = pv.len;
    firstPoint = new Point[len];   
    int i;
    for (i=0;i<len;i++){
        firstPoint[i] = pv.firstPoint[i];  
    }
}
PointArray::~PointArray(){
    delete[] firstPoint;
}
void PointArray::resize(const int &newLen){  
    if (newLen>=0){
        Point *a = new Point[newLen];  
        int actlLen = (newLen < len ? newLen : len); 
        int i;
        for (i=0;i<actLen;i++){
            a[i] = firstPoint[i];
        }
        delete[] firstPoint;
        firstPoint = a;
        len = newLen;
    }
    else{
        cout << "Ingrese otro valor" << endl;
    }
}
void PointArray::push_back(const Point &p){ 
    resize(len+1);                          
    firstPoint[len-1] = p; 
}
void PointArray::insert(const int &position, const Point &p){
    resize(len + 1);
    int i;
    for (i=len-1;i>position;i--){  
        firstPoint[i] = firstPoint[i - 1];        
    }
    firstPoint[position] = p;
}
void PointArray::remove(const int &pos){
    if (pos >= 0 && pos < len){
        int i;
        for (i=pos;i<len-1;i++){
            firstPoint[i] = firstPoint[i + 1];
        }
        resize(length - 1);
    }
    else{
        cout << "Ingrese otro valor" << endl;
    }
}
const int PointArray::getSize() const{  
    return len;
}
void PointArray::clear(){
    resize(0);
}
Point* PointArray::get(const int &position){    
    if (position >= 0 && position < len){
        return firstPoint + position;
    }
    else{
        return NULL;
    }
}  
const Point* PointArray::get(const int &position) {    
    if (position >= 0 && position < len){
        return firstPoint + position;
    }
    else{
        return NULL;
    }
}

void PointArray::showPoint(const int &pos){
    cout << "x: " << firstPoint[pos].getX() << endl;
    cout << "y: " << firstPoint[pos].getY() << endl;
}
