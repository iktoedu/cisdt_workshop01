#include "util.h"
#include <cmath>
#include <iostream>

using namespace std;

double distance3d(double x1, double y1, double z1, double x2, double y2, double z2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
}

void printSphere(CSphere &sphere)
{
    cout << "(" << sphere.x << "; " << sphere.y << "; " << sphere.z << ")   r = " << sphere.r << endl;
}
