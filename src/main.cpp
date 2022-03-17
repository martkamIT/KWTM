//#ifdef USE_TRIGONOMETRY_DEGREE
//    #include trygonometria.h
//#endif
#include <iostream>
#include <trygonometria.h>

int main() 
{
    std::cout<<"Hello World!\n";
    double result = 0;
    /*#ifdef USE_TRIGONOMETRY_DEGREE
        result = cos(45.0);
    #else
        result = cos(pi/4.0);
    #endif*/
    result = cos(90);
    
    //sin(60);
    //cos(60);
    //tg(60);
    //ctg(60);

    std::cout<<result<<std::endl;
}