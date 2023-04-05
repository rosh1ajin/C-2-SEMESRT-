#include <iostream>
using namespace std;

int main() {
    float a = 10.5, b = 5.7;
    float *ptr1, *ptr2;
    
    ptr1 = &a;
    ptr2 = &b;

    float sum = *ptr1 + *ptr2;
    float dif = *ptr1 - *ptr2;
    
    cout << "Сумма: " << sum << endl;
    cout << "Разность: " << dif << endl;
    
    cout << "Адреса указателей: " << ptr1 << " и " << ptr2 << endl;
    
    return 0;
}
