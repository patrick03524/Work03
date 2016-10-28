#include <iostream>
#include "PointArray.h"

using namespace std;

int main()
{
    Point a[4];
    a[3]= 2,44;
    PointArray pa1{a,4}
    pointArray pa2{pa1}
    
    Point nuevo1{14, 25};
    pA2.pushBack(nuevo1);
    
    
    cout << "Tu array de puntos es: " << endl;
    return 0;
}
