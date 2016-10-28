#include <iostream>
#include "PointArray.h"

using namespace std;

int main()
{
    Point a[4];
    a[3]= 2,44;
    PointArray pa1{a,4}
    
    Point b{23,24};
    pa1.pushBack(b);
    
    Point c{15,16};
    pa1.insert(1, c);
    pa1.showPoint(1);
    pa1.showPoint(4);
    cout << pa1.getSize() << endl;
    pa1.remove(3);
    pa1.showPoint(3);
    cout << pa1.getSize() << endl;
    Point *pt = pa1.get(3);   
    cout << pt->getX() << endl;
    cout << pt->getY() << endl;
    pa1.clear();
    cout << pa1.getSize() << endl;

    return 0;
}
