#include "trygonometria.h"
#include <cmath>

#define PI 3.14159265

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
double degreemath::tg(double degree) {
//zamiana stopni na radiany: pi radianów = 180 stopni
double radian =  degree * (PI / 180.0);
return std::tg(radian); //funkcja biblioteczna z piku <cmath>
}
double degreemath::ctg(double degree) {
//zamiana stopni na radiany: pi radianów = 180 stopni
double radian =  degree * (PI / 180.0);
return std::ctg(radian); //funkcja biblioteczna z piku <cmath>
}