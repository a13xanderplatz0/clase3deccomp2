#include <iostream>
int main() {
    // 1. Crear matriz 3x3
    int** matrix = new int*[3];
    
    // 2. Inicializar filas y columnas
    for(int i = 0; i < 3; i++) {
        matrix[i] = new int[3];
        for(int j = 0; j < 3; j++) {
            matrix[i][j] = i * 3 + j;  // Llenar con valores 0-8
        }
    }
    
    // 3. Acceder correctamente a los elementos
    std::cout << matrix[2][0] << std::endl;  // Imprime 6
    
    // 4. Liberar memoria
    for(int i = 0; i < 3; i++) {
        delete[] matrix[i];  // Liberar cada fila
    }
    delete[] matrix;  // Liberar array de punteros
    
    return 0;
}
