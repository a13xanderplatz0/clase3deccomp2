
    #include <iostream>
int main() {
    // 1. Asignar memoria para 5 enteros
    int* p = new int[5];
    
    // 2. Inicializar el array (corregido el bucle for)
    for(int i = 0; i < 5; i++) {
        p[i] = i;
    }
    
    // 3. q apunta a la misma memoria que p
    int* q = p;
    
    // 4. Acceder/modificar memoria ANTES de liberarla
    q[2] = 10;
    std::cout << q[2] << std::endl;  // Imprimirá 10
    
    // 5. Liberar memoria (solo una vez!)
    delete[] p;
    
    // ¡Importante! No usar q después de delete[]
    return 0;


   /* int*p=new int[5];
    for(int i=0,i<5;i++){
        p[i]=i;
    }
    int*q=p;
    delete[]=p;
    q[2]=10;
    std::cout<<q[2];
    */
}
