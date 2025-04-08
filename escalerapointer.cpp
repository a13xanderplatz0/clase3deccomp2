#include <iostream>
int main(){
    int a=5;
    int*p=&a;
    int**pp=&p;
    int***ppp=&pp;
    int****pppp=&ppp;
    ****pppp=10;
    std::cout<<"valor de a: "<<a;

}
