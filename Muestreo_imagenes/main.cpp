#include <iostream>
#include <imagen.h>

using namespace std;

int main()
{
    //ubicación: ../Muestreo_imagenes/Banderas/Brasil.jpg
    remove("Matrices.txt");
    string filename;
    cout<<"Ingrese la ubicacion de la imagen: ";
    cin>>filename;
    imagen image(filename);
    image.muestreo();
    image.guardar_archivo();
}
