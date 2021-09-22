#ifndef IMAGEN_H
#define IMAGEN_H

#include <iostream>
#include <map>
#include <QImage>

#define leds 16

using namespace std;

class imagen
{
public:
    imagen(string filename);
    void submuestreo();
    ~imagen();
private:
    QImage *im;
    int matrizR[leds][leds], matrizG[leds][leds], matrizB[leds][leds];
    int dimx,dimy,centrox,centroy,x,y;
    map <int,int> coloresR;
    map <int,int> coloresG;
    map <int,int> coloresB;
};

#endif // IMAGEN_H
