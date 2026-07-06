#include <iostream>
#include "Personaje.hpp"
using namespace std;


int main() 
{

    Personaje heroe(100, 30, 5);
    Personaje enemigo(100, 25, 3);

    heroe.imprimir();
    enemigo.imprimir();

    heroe.atacar(enemigo);

    heroe.imprimir();
    enemigo.imprimir();

    return 0;

}
