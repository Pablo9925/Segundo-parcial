#ifndef IMAGEN_H
#define IMAGEN_H

#include <iostream>
#include <map>
#include <QImage>
#include <fstream>

#define leds 16

using namespace std;

class imagen
{
public:
    imagen(string filename);
    void muestreo();
    void guardar_archivo();
    ~imagen();
private:
    QImage *im;
    int matrizR[leds][leds], matrizG[leds][leds], matrizB[leds][leds];
    float dimx,dimy,centrox,centroy,x,y;
    map <int,int> coloresR;
    map <int,int> coloresG;
    map <int,int> coloresB;
    map<int,int>::iterator it;
};

#endif // IMAGEN_H
