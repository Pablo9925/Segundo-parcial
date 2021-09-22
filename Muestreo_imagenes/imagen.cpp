#include "imagen.h"

imagen::imagen(string filename)
{
    im=new QImage(filename.c_str());
    dimx=im->width();
    dimy=im->height();
    centrox=dimx/2;
    centroy=dimy/2;
    x=dimx/leds;
    y=dimy/leds;
    //cout<<"x: "<<dimx<<"\ny: "<<dimy<<endl;
}

void imagen::submuestreo()
{

}

imagen::~imagen()
{
    delete im;
}
