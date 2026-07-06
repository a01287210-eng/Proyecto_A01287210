#ifndef UNIDAD_HPP
#define UNIDAD_HPP
 
class Personaje {
private:
    int vida;
    int salud;
    int ataque;
    int nivel;
 
public:
    Personaje();
    Personaje(int v, int a, int n);
 
    int getVida();
    int getSalud();
    int getAtaque();
    int getNivel();
 
    void setVida(int v);
    void setSalud(int s);
    void setAtaque(int a);
    void setNivel(int n);
 
    int porcentajeSalud();
    void imprimeBarra();
    int calculaAtaque(Personaje& objetivo);
    void recibeAtaque(int puntos);
    void atacar(Personaje& objetivo);
    void imprimir();
};
 
#endif// Crear el archivo header de la clase Personaje, no olvides las guardas o el pragma.
