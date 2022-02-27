#include <iostream>
using std::cout;
using std::endl;

#include "LibroCalificaciones.h"

int main(){

    LibroCalificaciones libro1("Introduccion a la programacion en c++ desde 0 a avanzado como un pro.");
    LibroCalificaciones libro2("Segundo libro");

    cout << "Libro1:" << libro1.obtenerNombreCurso() << endl;
    cout << "Libro2:" << libro2.obtenerNombreCurso() << endl;
    
    return 0;

}
