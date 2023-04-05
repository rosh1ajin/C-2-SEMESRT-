#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int n;
    cout << " ";
    cin >> n;

    float* arr = new float[n];
    srand(time(nullptr));

    for (int i = 0; i < n; i++) {
        arr[i] = static_cast<float>(rand()) / RAND_MAX;
    }

    cout << "Элементы массива и их адреса:\n";
    for (int i = 0; i < n; i++) {
        cout << "Элемент #" << i << ": " << arr[i] << " (адрес: " << &arr[i] << ")\n";
    }

    delete[] arr;
    return 0;
}