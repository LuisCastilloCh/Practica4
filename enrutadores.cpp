#include "enrutadores.h"
#include <iostream>
#include <string.h>
#include <map>
#include <list>

using namespace std;

// dic1 crea un diccionario que guarda strings en strings
typedef map<string, string> dic1;
// dic2 crea un diccionario que guarda int en strings
typedef map<string, int> dic2;

//funciones del enrutador set

void enrutadores::setNombre(string name){
    this->nombre=name;
}
void enrutadores::setCostos(enrutadores ruter, int costo){
    this->costo[ruter.getNombre()]=costo;
}
void enrutadores::setEliminar(enrutadores ruter){
    this->costo.erase(ruter.getNombre());
}
void enrutadores::setCostRuter(dic2 dic_1){
    this->costo=dic_1;
}
void enrutadores::setDireccion(dic1 dic_2){
    this->direccion=dic_2;
}

//funciones enrutador get

string enrutadores::getNombre(){
    return nombre;
}
dic2 enrutadores::getCostos(){
    return costo;
}
dic2 enrutadores::getCostRuter(){
    return costRuter;
}
dic1 enrutadores::getDireccion(){
    return direccion;
}

