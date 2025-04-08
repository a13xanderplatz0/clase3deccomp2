#include <iostream>
int main(){
    int ***p=new int **[2];
    p[0]=new int *[2];
    p[1]=new int *[2];
    p[0][0]=new int(5);
    p[0][1]=new int(10);
    p[1][0]=new int(15);
    p[1][1]=new int(20);

    std::cout<<*p[0][1]+*p[1][0]<<std::endl;
}
