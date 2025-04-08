#include <iostream>
int main() {
    int *p;    // Declara un puntero, pero NO está inicializado
    int a = 3; // Variable normal con valor 3
    *p = 7;    // ¡ERROR! Desreferencia un puntero no inicializado
}
