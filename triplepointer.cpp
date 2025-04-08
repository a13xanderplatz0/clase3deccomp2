#include <iostream>
int main() {
    // Crear un arreglo de 2 punteros a punteros a int
    int*** p = new int**[2];
    
    for(int i = 0; i < 2; i++) {
        p[i] = new int*[2];  // Cada elemento apunta a un arreglo de 2 punteros a int
        
        for(int j = 0; j < 2; j++) {
            p[i][j] = new int(i * 2 + j);  // Asignar memoria para un int y darle valor
        }
    }
    
    // Imprimir el valor almacenado en p[1][0]
    std::cout << *p[1][0];  // Debería imprimir 2
    
    // Liberar memoria
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            delete p[i][j];  // Liberar cada int
        }
        delete[] p[i];       // Liberar arreglo de punteros
    }
    delete[] p;              // Liberar arreglo principal
    
    return 0;
}
