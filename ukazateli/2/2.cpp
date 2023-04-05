#include <iostream>
void swap(float* a, float* b)
{
    float temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    float x = 2.5;
    float y = 4.8;

    std::cout << "Before swapping: " << std::endl;
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;

    swap(&x, &y);

    std::cout << "After swapping: " << std::endl;
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;

    return 0;
}