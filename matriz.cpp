#include <iostream>
int main(){
    int ** matrix=new int *[2];
    matrix[0]=new int[2]{1,2};
    matrix[1]=new int[2]{3,4};
    std::cout<<"resultado: "<<matrix[0][1]+matrix[1][0]<<std::endl;
    // 🧼 Importante: liberar memoria 
     delete[] matrix[0];
     delete[] matrix[1];
     delete[] matrix;
}
