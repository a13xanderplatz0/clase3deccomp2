#include <iostream>
int main() {
    int a = 10;
    int *p = &a;        // Puntero a 'a'
    int *&ref = p;      // Referencia a puntero 'p'
    ref = new int(20);  // 'p' ahora apunta a un nuevo int (20)
    int resultado = a;   // resultado = 10 (porque 'a' no cambió)
    
    std::cout << resultado << std::endl; // Imprime 10
    delete p;           // Liberar memoria dinámica
    return 0;
}
