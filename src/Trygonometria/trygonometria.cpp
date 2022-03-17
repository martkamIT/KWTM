#include "trygonometria.h"
#include <cmath>

#define PI 3.14159265358979323846

double degreemath::sin(double degree) {
//zamiana stopni na radiany: pi radianów = 180 stopni
double radian =  degree * (PI / 180.0);
return std::sin(radian); //funkcja biblioteczna z piku <cmath>
}
double degreemath::cos(double degree) {
//zamiana stopni na radiany: pi radianów = 180 stopni
double radian =  degree * (PI / 180.0);
return std::cos(radian); //funkcja biblioteczna z piku <cmath>
}
double degreemath::tan(double degree) {
//zamiana stopni na radiany: pi radianów = 180 stopni
double radian =  degree * (PI / 180.0);
return std::tan(radian); //funkcja biblioteczna z piku <cmath>
}
double degreemath::ctan(double degree) {
//zamiana stopni na radiany: pi radianów = 180 stopni
double radian =  degree * (PI / 180.0);
return 1/std::tan(radian); //funkcja biblioteczna z piku <cmath>
}