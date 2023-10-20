#include <iostream>
#include "puntero.h"
using namespace std;
int main(){
    Punto p;
    p.setX(10);
    p.setY(20);
    p.print();
    //crear un puntero tipo punto
    // hacer que dicho puntero apunte a p
    // modificar los valores de x y y usando el puntero
    // invocar la funcion print usando el puntero
    Punto *ptr=&p;
    ptr->setX(5);
    ptr->setY(10);
    ptr->print();
    return 0;
}