#include <iostream>
#include <imagen.h>

using namespace std;

int main()
{
    //ubicación: ../Muestreo_imagenes/Banderas/Brasil.jpg
    //Cambio con respecto a la idea original, se decide iniciar el muestreo en el centro de la imagen para conservar la simetría de algunas figuras (ejm: círculo en bandera de Japón)
    string filename;
    cout<<"Ingrese la ubicacion de la imagen: ";
    cin>>filename;
    imagen image(filename);
    image.submuestreo();
}
