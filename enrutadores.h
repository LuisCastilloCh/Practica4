#ifndef ENRUTADORES_H
#define ENRUTADORES_H

#include <iostream>
#include <string.h>
#include <map>
#include <list>

using namespace std;

// dic1 crea un diccionario que guarda strings en strings
typedef map<string, string> dic1;
// dic2 crea un diccionario que guarda int en strings
typedef map<string, int> dic2;

class enrutadores{

    private:
        string nombre;
        dic1 direccion;
        dic2 costo;
        dic2 costRuter;

    public:
        void setNombre(string name);
        void setCostos(enrutadores ruter, int costo);
        void setEliminar(enrutadores ruter);
        void setCostRuter(dic2 dic_1);
        void setDireccion(dic1 dic_2);

    string getNombre();
    dic2 getCostos();
    dic2 getCostRuter();
    dic1 getDireccion();

};

#endif // ENRUTADORES_H
