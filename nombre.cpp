#include <iostream>
int main() {
    int x = 5;
    int *ptr = &x;
    int *&r = ptr;
    *r = 10;
    std::cout << x << std::endl;
    return 0;
}
