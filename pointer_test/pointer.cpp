#include <iostream>

int main()
{
    int array[5];
    int *p = new int[5];
    p[2] = 22;
    std::cout << p[2] << std::endl;

    int **q = &p;

    std::cout << p << std::endl;
    std::cout << &p[0] << std::endl;
    
     
}

// struct add here
