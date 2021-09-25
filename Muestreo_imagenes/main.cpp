#include <iostream>
#include <imagen.h>

using namespace std;

int main()
{
    //ubicación: ../Muestreo_imagenes/Banderas/.jpg
    remove("Matrices.txt");
    string im,filename="../Muestreo_imagenes/Banderas/";
    cout<<"Ingrese la ubicacion de la imagen: ";
    cin>>im;
    filename.append(im);
    imagen image(filename);
    image.muestreo();
    image.guardar_archivo();
}
