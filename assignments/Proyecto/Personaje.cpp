#include <iostream>
using namespace std;
 
class Unidad {
private:
    int vida;
    int salud;
    int ataque;
    int nivel;
 
public:
    Unidad() {
        vida = 100;
        salud = 100;
        ataque = 10;
        nivel = 1;
    }
 
    Unidad(int v, int a, int n) {
        vida = v;
        salud = v;
        ataque = a;
        nivel = n;
    }
 
    // Getters
    int getVida() { return vida; }
    int getSalud() { return salud; }
    int getAtaque() { return ataque; }
    int getNivel() { return nivel; }
 
    // Setters
    void setVida(int v) { vida = v; }
    void setSalud(int s) { salud = s; }
    void setAtaque(int a) { ataque = a; }
    void setNivel(int n) { nivel = n; }

    int porcentajeSalud() {
        return (salud * 100) / vida;
    }
 
    void imprimeBarra() {
        int porcentaje = porcentajeSalud();
        int llenos = (porcentaje * 20) / 100;
 
        for (int i = 0; i < 20; i++) {
            if (i < llenos) {
                cout << "%";
            } else {
                cout << "=";
            }
        }
    }
 
    int calculaAtaque(Unidad& objetivo) {
        if (objetivo.nivel > nivel) {
            return 1 + rand() % (ataque / 2);
        } else {
            return ataque / 2 + rand() % (ataque / 2 + 1);
        }
    }

    void recibeAtaque(int puntos) {
        salud = salud - puntos;
        if (salud < 0) {
            salud = 0;
        }
    }
 
    // Ataca
    void atacar(Unidad& objetivo) {
        int danio = calculaAtaque(objetivo);
        objetivo.recibeAtaque(danio);
    }
    // imprime
    void imprimir() {
        cout << "Nivel: " << nivel << " Ataque: " << ataque << " Salud: " << salud << "/" << vida << " ";
        imprimeBarra();
        cout << endl;
    }
