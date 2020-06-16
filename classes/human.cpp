#include "human.h"

human::human()
{
    _height = 185;
    _wieght = 85;
}

human::~human()
{
    //dtor
}

void human::setheight(double height){
    _height = height;
}

void human::setwieght(double wieght){
    _wieght = wieght;
}

double human::getheight(){
return _height;
}

double human::getwieght(){
return _wieght;
}
