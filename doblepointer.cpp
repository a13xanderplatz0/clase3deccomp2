#include <iostream>
int main() {
    int **pp;        // Declara un puntero a puntero, pero NO lo inicializa
    *pp = new int(10); // ERROR: intenta escribir en memoria no asignada
    std::cout << **pp;
}
/*
#include <iostream>
int main() {
    int **pp = new int*;  // 1. Asigna memoria para el puntero intermedio
    *pp = new int(10);    // 2. Asigna memoria para el entero y guarda 10
    std::cout << **pp;    // 3. Imprime 10 (doble desreferencia)
    
    // Liberar memoria
    delete *pp;
    delete pp;
}*/
