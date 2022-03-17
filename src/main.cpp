#include <iostream>
#include <LaborkaConfig.h>

#ifdef USE_TRIGONOMETRY_DEGREE
    #include <trygonometria.h>
#else
    #include <cmath>
#endif

#define PI 3.14159265358979323846

int main() 
{
    std::cout<<"TRIGONOMETRY COS:\n";
    double result = 0;

    #ifdef USE_TRIGONOMETRY_DEGREE
        result = cos(45.0);
    #else
        result = cos(PI/4.0);
    #endif

    std::cout<<result<<std::endl;
}