#include <iostream>
#include "LibroCalificaciones.h"
using std::cout;
using std::endl;

LibroCalificaciones::LibroCalificaciones(string nombre){
    establecerNombreCurso(nombre);
}

void LibroCalificaciones::establecerNombreCurso(string nombre){
    if(nombre.length() <= 25)
        nombreCurso = nombre;
    if(nombre.length() > 25) {
        nombreCurso = nombre.substr(0,22) + "...";
        cout << "El nombre \"" << nombre << "\" es demasiado grande y se trucara." << endl;
    }
}

string LibroCalificaciones::obtenerNombreCurso(){
    return nombreCurso;
}

void LibroCalificaciones::mostrarMensaje(){
    cout << "Bienvenido al libro de calificaciones para\n"<< obtenerNombreCurso() << "!" << endl;
}
